#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int q;
	cin >> q;
	int choice, number;
	set<int>s;
	for (int i = 0; i < q; i++) {
		cin >> choice >> number;
		if (choice == 1) {
			s.insert(number);
		}
		else if (choice == 2) {
			s.erase(number);
		}
		else if (choice == 3) {
			set<int>::iterator itr = s.find(number);
			if (itr == s.end()) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}
	}
	return 0;
}
