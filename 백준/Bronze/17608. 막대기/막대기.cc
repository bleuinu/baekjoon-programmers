#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, x;
	cin >> k;
	vector<int> v;

	for(int i=0; i<k; ++i) {
		cin >> x;
		v.push_back(x);
	}

	k = v.back();
	v.pop_back();
	x = 1;
	int prev = -1;
	while(!v.empty()) {
		int val = v.back();
		if(val == prev || val < prev) {
			v.pop_back();
			continue;
		}
		v.pop_back();
		if(val > k) {
			prev = val;
			++x;
		}
	}

	cout << x << endl;

	return 0;
}