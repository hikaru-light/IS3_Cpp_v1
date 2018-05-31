#include <iostream>
using namespace std;

class Mybuf1 {
	int val1, val2;
public:
	Mybuf1();
	void put(int x);
	int get();
};

Mybuf1::Mybuf1() {
	val1 = val2 = 0;
}

void Mybuf1::put(int x) {
	val2 = val1; val1 = x;
}

int Mybuf1::get() {
	int x = val1; val1 = val2;
	return x;
}

int main(void) {
	Mybuf1 buf;
	while(true) {
		char c; int v;
		cout << "?:"; cin >> c;
		switch(c) {
			case 'q': return 0;
			case 'p': cin >> v; buf.put(v); break;
			case 'g': cout << buf.get() << '\n'; break;
		}
	}
}

