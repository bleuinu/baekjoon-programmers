#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string pattern;
	cin >> pattern;
	
	for(int i=0; i<n-1; ++i) {
		string file;
		cin >> file;
		
		for(int j=0; j<file.size(); ++j) {
			if(pattern[j] != file[j]) {
				pattern[j] = '?';
			}
		}
	}
	
	cout << pattern << endl;
	
	return 0;
}