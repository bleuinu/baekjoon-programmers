#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int a,b;
		scanf("%d %d", &a, &b);
		int sum = 1;
		
		for(int j=1; j<=b; ++j) {
			sum *= a;
			sum %= 10;
		}
		printf("%d\n", (sum==0 ? 10 : sum));
	}
}