#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int teams, games;
	cin >> teams >> games;

	list<int> team;
	for(int i=0; i<teams; ++i) {
		team.push_back(i+1);
	}

	for(int i=0; i<games; ++i) {
		char ch1, ch2;
		int x1, x2;
		cin >> ch1 >> x1;
		cin >> ch2 >> x2;

		auto win = team.begin();
		auto lost = team.begin();

		int n = 0, m = 0;
		while(win != team.end()) {
			if(*win == x1) break;
			++win;
			++n;
		}
		while(lost != team.end()) {
			if(*lost == x2) break;
			++lost;
			++m;
		}

		if(n > m) {
			int val = *lost;
			lost = team.erase(lost);
			++win;
			team.insert(win, val);
		}
	}

	auto it = team.begin();
	while(it != team.end()) {
		cout << 'T' << *it << ' ';
		++it;
	}
	cout << endl;

	return 0;
}