#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue<int> q, q2;
	for(int i=0; i<n; ++i) {
		q.push(i+1);
	}

	for(int i=0; i<n; ++i) {
		for(int j=0; j<k-1; ++j) {
			q.push(q.front());
			q.pop();
		}
		q2.push(q.front());
		q.pop();
	}

	cout << "<";
	while(q2.size() > 1) {
		cout << q2.front() << ", ";
		q2.pop();
	}
	cout << q2.front() << ">" << endl;

	return 0;
}