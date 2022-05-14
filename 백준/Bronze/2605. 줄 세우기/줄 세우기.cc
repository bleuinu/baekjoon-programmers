#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	list<int> order;

	for(int i=0; i<n; ++i) {
		int pos; 
		cin >> pos;
		auto it = order.begin();
		for(int i=0; i<pos; ++i) it++;
		order.insert(it, i+1);
	}

	auto it = order.rbegin();
	while(it != order.rend()) {
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	return 0;
}