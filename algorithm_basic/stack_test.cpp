#include <bits/stdc++.h>

using namespace std;

const int MAX = 100000001;
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
	time_t start, end;
	start = time(NULL);
	for (int i = 0; i < MAX; i++)
		push(1);
	end = time(NULL);

	cout << (double)(end - start) << endl;
}

int main() {
	test();
	return 0;
}