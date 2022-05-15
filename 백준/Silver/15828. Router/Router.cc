#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	queue<int> q;

	int p;
	while(true) {
		cin >> p;
		if(p==-1) break;
		else if(p==0) q.pop();
		else if(q.size() >= n) continue;
		else q.push(p);
	}

	if(q.empty()) {
		cout << "empty" << endl;
	} else {
		while(!q.empty()) {
			cout << q.front() << ' ';
			q.pop();
		}
		cout << endl;
	}

	return 0;
}