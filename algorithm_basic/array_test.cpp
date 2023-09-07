#include <bits/stdc++.h>

using namespace std;

void insert(int idx, int num, int arr[], int& len) {
	if (idx > len) return;

	int prev = num;
	len++;

	for (int i = idx; i < len; i++) {
		int cur = arr[i];
		arr[i] = prev;
		prev = cur;
	}
}

void erase(int idx, int arr[], int& len) {
	if (idx > len || idx < 0) return;

	len--;
	for (int i = idx; i < len; i++) {
		arr[i] = arr[i + 1];
	}
}

void printArr(int arr[], int& len) {
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << "\n\n";
}

void insert_test() {
	int arr[10] = { 1, 2, 3, 4 };
	int len = 4;
	insert(4, 4, arr, len);

	printArr(arr, len);
}

void erase_test() {
	int arr[10] = { 1, 2, 3, 4, 5 };
	int len = 5;

	erase(3, arr, len);
	printArr(arr, len);
}


int main() {
	insert_test();
	erase_test();
}