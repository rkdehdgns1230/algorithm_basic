#include <bits/stdc++.h>

using namespace std;

int main() {
	list<int> L = { 1, 2 }; // 1 2
	list<int>::iterator t = L.begin(); // t: 1

	L.push_front(10); // 10 1(t) 2
	cout << *t << '\n';

	L.push_back(11); // 10 1(t) 2 11
	L.insert(t, 6); // 10 6 1(t) 2 11
	
	t++; // t: 2
	cout << *t << '\n'; // 10 6 1 2(t) 11

	for (auto i : L)
		cout << i << " ";
	cout << "\n\n";


	for (list<int>::iterator i = L.begin(); i != L.end(); i++) {
		cout << *i << " ";
	} cout << "\n\n";

}