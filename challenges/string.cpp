#include <iostream>
#include <string>
using namespace std;

void concat_and_log(char c, string str) {
	cout << c;
	for (int i = 1; i < str.size(); i++) {
		cout << str[i];
	}
}

int main() {
	string a, b;
	cin >> a >> b;
	cout << a.size() << " " << b.size() << endl;
	cout << a + b << endl;
	concat_and_log(b[0], a);
	cout << " ";
	concat_and_log(a[0], b);
	cout << endl;
	return 0;
}
