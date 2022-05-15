#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[10001] = {0};
	int pos = 0;

	cin >> n;
	while(n--) {
		string command;
		cin >> command;

		switch(command[0]) {
			case 'p': {
					if(command[1] == 'u') {
						int data; cin >> data;
						arr[pos] = data;
						++pos;
					} else {
						if(pos == 0) cout << -1 << endl;
						else {
							--pos;
							cout << arr[pos] << endl;
						}
					}
					break;
			  }
			case 't':
				cout << ((pos == 0) ? -1 : arr[pos-1]) << endl;
				break;
			case 's':
				cout << pos << endl;
				break;
			case 'e':
				cout << (pos == 0) << endl;
		}
	}
	return 0;
}