#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int length, number;
	cin >> length;
	vector<int> v;
	for (int i = 0; i < length; i++) {
		cin >> number;
		v.push_back(number);
	}

	int numOfQueries;
	cin >> numOfQueries;
	int query;
	for (int i = 0; i < numOfQueries; i++) {
		cin >> query;
		auto index = lower_bound(v.begin(), v.end(), query) - v.begin();
		if (v.at(index) == query) {
			cout << "Yes " << index + 1 << endl;
		}
		else {
			cout << "No " << index + 1 << endl;
		}
	}

	return 0;
}
