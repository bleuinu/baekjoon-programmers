#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	list<char> ans;
	string str;
	int t;
	cin >> str >> t;
	for(int i=0; i<str.size(); ++i) {
		ans.push_back(str[i]);
	}

	auto it = ans.end();

	for(int i=0; i<t; ++i) {
		char c;
		cin >> c;

		if(c == 'L') {
			if(it != ans.begin()) {--it;}
		} else if(c == 'D') {
			if(it != ans.end()) {++it;}
		} else if(c == 'B') {
			if(it != ans.begin()) {
				it = ans.erase(--it);
			}
		} else {
			char ch; cin >> ch;
			ans.insert(it, ch);
		}
	}

	it = ans.begin();
	while(it != ans.end()) {
		cout << *it;
		++it;
	}
	cout << endl;

	return 0;
}