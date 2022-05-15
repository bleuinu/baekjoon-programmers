#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	scanf("%d", &k);
	char s[27];
	vector<char *> v;

	char ch;
	scanf("%c", &ch);
	for(int i=0; i<k; ++i) {
		cin.getline(s, 27);
		char *ptr;
		ptr = strtok(s, " ");
		while(ptr != NULL) {
			v.push_back(ptr);
			ptr = strtok(NULL, " ");
		}

		printf("Case #%d: ", i+1);
		while(!v.empty()) {
			printf("%s ", v.back());
			v.pop_back();
		}
		printf("\n");
	}


	return 0;
}