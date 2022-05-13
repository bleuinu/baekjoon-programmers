#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while(t--) {
		list<char> ans;
		string s;
		cin >> s;

		const int SIZE = s.size();
		auto it = ans.begin();
		for(int i=0; i<SIZE; ++i) {
			if(s[i] == '<') {
				if(it != ans.begin()) {--it;}
			} else if(s[i] == '>') {
				if(it != ans.end()) {++it;}
			} else if(s[i] == '-') {
				if(it != ans.begin()) {
					it = ans.erase(--it);
				}
			} else {
				ans.insert(it, s[i]);
			}
		}

		it = ans.begin();
		while(it != ans.end()) {
			printf("%c", *it);
			++it;
		}
		printf("\n");
	}

	return 0;
}