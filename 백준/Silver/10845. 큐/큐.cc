#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> v;

	cin >> n;
	while(n--) {
		string command;
		cin >> command;

		switch(command[0]) {
			case 'p': {
					if(command[1] == 'u') {
						int data; cin >> data;
						v.push_back(data);
					} else {
						if(v.size() == 0) cout << -1 << endl;
						else {
							cout << v.front() << endl;
							v.erase(v.begin());
						}
					}
					break;
			  }
			case 'f':
				cout << ((v.empty()) ? -1 : v[0]) << endl;
				break;
			case 'b':
				cout << ((v.empty()) ? -1 : v.back()) << endl;
				break;
			case 's':
				cout << v.size() << endl;
				break;
			case 'e':
				cout << (v.empty()) << endl;
		}
	}
	return 0;
}