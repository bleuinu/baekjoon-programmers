#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  uint64_t a,b,c;
  scanf("%llu %llu", &a, &b);
  if (a > b) swap(a,b);
  c = b-a-1;
  printf("%llu\n", (a==b) ? 0 : c);
  for(uint64_t i=a+1; i<b; ++i) printf("%llu ", i);
  return 0;
}
