#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int length, number, indexToRemove, startRange, endRange;
	cin >> length;
	vector<int> v;
	for (int i = 0; i < length; i++) {
		cin >> number;
		v.push_back(number);
	}
	cin >> indexToRemove >> startRange >> endRange;

	v.erase(v.begin() + (indexToRemove - 1));
	v.erase(v.begin() + (startRange - 1), v.begin() + (endRange - 1));

	cout << v.size() << endl;
	for (auto i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}
