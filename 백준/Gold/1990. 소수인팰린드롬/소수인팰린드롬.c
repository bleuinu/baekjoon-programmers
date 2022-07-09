#include <stdio.h>

unsigned prime(int n) { 
	if(n<2) return 0;
	if(n<=3) return 1;
	
	if(n%2 == 0 || n%3 == 0) return 0;
	
	for(int i=5; i*i <= n; i+=6)
		if(n%i==0 || n%(i+2)==0) 
			return 0;
	return 1;
}

unsigned palindrome(int n) {
	if(n < 10) return 1;
	unsigned temp = n;
	unsigned x=0;
	while(n) {
		x*=10;
		x = x + n%10;
		n /= 10;
	}
	return temp == x;
}

int main(void) {
	unsigned a,b;
	scanf("%u %u", &a, &b);
	for(int i=a; i<=b; ++i) {
		if(i&1 && palindrome(i) && prime(i))
			printf("%u\n", i);
	}
	printf("-1");
}