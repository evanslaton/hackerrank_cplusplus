#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
	vector<int> v;
	int n;
	char ch;
	while (!ss.eof()) {
		ss >> n;
		v.push_back(n);
		ss >> ch;
	}
	return v;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
