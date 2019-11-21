#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int length;
	cin >> length;
	map<string, int>m;
	int queryType, score;
	string name;
	for (int i = 0; i < length; i++) {
		cin >> queryType >> name;
		if (queryType == 1) {
			cin >> score;
			map<string, int>::iterator itr = m.find(name);
			if (itr != m.end()) {
				score += m[name];
				m.find(name)->second = score;
			}
			else {
				m.insert(make_pair(name, score));
			}
		}
		else if (queryType == 2) {
			m.erase(name);
		}
		else if (queryType == 3) {
			cout << m[name] << endl;
		}
	}
	return 0;
}
