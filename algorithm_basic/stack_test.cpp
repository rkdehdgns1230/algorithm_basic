#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000005;
int dat[MAX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	pos--;
}

int top() {
	return dat[pos - 1];
}

void print() {
	for (int i = 0; i < pos; i++) {
		cout << dat[i] << " ";
	}cout << "\n\n";
}

void test() {
	push(1);
	print();

	push(2);
	push(3);
	print();
	
	pop();
	print();

	cout << top() << "\n";
}

int main() {
	test();
	return 0;
}