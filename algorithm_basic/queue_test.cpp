#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000005;
int dat[MAX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
	tail %= MAX;
}

void pop() {
	head++;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail - 1];
}

void test() {
	push(3);
	push(4);

	cout << front() << endl;
	cout << back() << endl;

	pop();
	cout << front() << endl;
}

int main() {
	test();
}