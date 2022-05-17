#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,m,x;
	scanf("%d", &n);
	map<int, int> mymap;

	for(int i=0; i<n; ++i) {
		scanf("%d", &x);
		mymap[x] += 1;
	}

	scanf("%d", &m);
	for(int i=0; i<m; ++i) {
		scanf("%d", &x);
		if(mymap.find(x) != mymap.end()) 
			printf("%d ", mymap[x]);
		else 
			printf("0 ");
	}
	printf("\n");

	return 0;
}