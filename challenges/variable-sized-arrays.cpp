#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numOfSubArrays, numOfQueries;
	cin >> numOfSubArrays >> numOfQueries;

	vector<vector<int>> vectors;
	for (int i = 0; i < numOfSubArrays; i++) {
		vector<int> v;
		int k;
		cin >> k;
		int number;
		for (int i = 0; i < k; i++) {
			cin >> number;
			v.push_back(number);
		}

		vectors.push_back(v);
	}

	for (int i = 0; i < numOfQueries; i++) {
		int x, y;
		cin >> x >> y;
		cout << vectors.at(x).at(y) << endl;
	}

	return 0;
}
