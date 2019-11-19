#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int i;
	long l;
	char c;
	float f;
	double d;
	scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

	double rounder = 1.0 / 3.0;
	f = (int)(f * 1000.0) / 1000.0;

	printf("%d\n", i);
	printf("%ld\n", l);
	printf("%c\n", c);
	printf("%.3f\n", f);
	printf("%.9lf\n", d);

	return 0;
}
