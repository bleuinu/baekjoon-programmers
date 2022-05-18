#include <iostream>
using namespace std;

int binomialCoeff(int n, int k)
{
	if (k > n)
		return 0;
	if (k == 0 || k == n)
		return 1;

	return binomialCoeff(n - 1, k - 1)
		+ binomialCoeff(n - 1, k);
}

int main() {
	int x,y;
	cin >> x >> y;
	cout <<	binomialCoeff(x,y) << endl;
	return 0;
}