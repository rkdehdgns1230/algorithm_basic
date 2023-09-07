#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000005;
int dat[MAX], prv[MAX], nxt[MAX];
int unused = 1;

void insert(int idx, int num) {
	int next_idx = nxt[idx];
	dat[unused] = num;
	prv[unused] = idx;
	nxt[unused] = next_idx;

	nxt[idx] = unused;
	if(next_idx != -1)
		prv[next_idx] = unused;	
	
	unused++;
}

void erase(int idx) {
	int next_idx = nxt[idx];
	int prev_idx = prv[idx];
	if(next_idx != -1)
		prv[next_idx] = prv[idx];
	
	nxt[prev_idx] = nxt[idx];
}

void traverse() {
	int cur_idx = 0;

	cout << "linked list traversal\n";
	while (cur_idx != -1) {
		cout << dat[cur_idx] << " ";
		cur_idx = nxt[cur_idx];
	}cout << "\n\n";
}

void insert_test() {
	cout << "Insertion test\n";
	insert(0, 2);
	traverse();
	insert(0, 3);
	traverse();
	insert(1, 4);
	traverse();
}

void erase_test() {
	cout << "Erase test\n";
	erase(1);
	traverse();
	erase(2);
	traverse();
}

int main() {
	fill(prv, prv + MAX, -1);
	fill(nxt, nxt + MAX, -1);

	insert_test();
	erase_test();
}