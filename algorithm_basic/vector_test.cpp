#include <bits/stdc++.h>

using namespace std;

int main(void) {
	vector<int> v1(3, 5); // {5,5,5};
	cout << v1.size() << '\n'; // 3
	v1.push_back(7); // {5,5,5,7};

	// insert, erase는 O(N)의 시간 복잡도를 갖는 것에 주의
	vector<int> v2(2); // {0,0};
	v2.insert(v2.begin() + 1, 3); // {0,3,0};

	vector<int> v3 = { 1,2,3,4 }; // {1,2,3,4}
	v3.erase(v3.begin() + 2); // {1,2,4};

	vector<int> v4; // {}
	v4 = v3; // {1,2,4}

	for (int& e : v4) {
		cout << e << " ";
	}cout << "\n\n";

	v4.pop_back(); // {1,2}
	v4.clear(); // {}
}