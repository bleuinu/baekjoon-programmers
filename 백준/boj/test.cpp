#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;
	list<int> invite;

	for(int i=1; i<=k; ++i) {
		invite.push_back(i);
	}

	int m;
	cin >> m;

	for(int i=0; i<m; ++i) {
		int r;
		cin >> r;

		auto it = invite.end();
		int pos = invite.size();

		while(pos >= 0) {
			if(pos%r == 0) {
				if(it == invite.begin()) break;
				it = invite.erase(--it);
			}  else {
				--it;
			}
			--pos;
		}
	}

	auto it = invite.begin();
	while(it != invite.end()) {
		cout << *it << endl;
		++it;
	}

	return 0;
}
