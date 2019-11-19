#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int length;
	cin >> length;

	int numbers[length];
	for (int i = 0; i < length; i++) {
		cin >> numbers[i];
	}

	for (int i = length - 1; i >= 0; i--) {
		cout << numbers[i] << " ";
	}
	return 0;
}
