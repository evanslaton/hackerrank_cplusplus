#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int length;
	cin >> length;
	vector<int>v;
	int number;
	for (int i = 0; i < length; i++) {
		cin >> number;
		v.push_back(number);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < length; i++) {
		cout << v.at(i) << " ";
	}
	return 0;
}
