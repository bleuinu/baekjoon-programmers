#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	vector<int> v;

	for(int i=0; i<k; ++i) {
		int x; cin >> x;
		if(x == 0) v.pop_back();
		else v.push_back(x);
	}

	cout << accumulate(v.begin(), v.end(), 0) << endl;

	return 0;
}