#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a==0) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n%d\n", gcd(x, y), lcm(x,y));

	return 0;
}