#include <bits/stdc++.h> 
using namespace std;

int given[100005];
char ansTxt[100005];
char ans[200005];

int main() {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    scanf("%d", &given[i]);
  }

  int curr = 1;
  int ansIdx = 0;
  int ansTxtIdx = 0;
  int givenIdx = 0;

  stack<int> stk;
  while(curr <= n) {
    if(!stk.empty() && stk.top() == given[givenIdx]) {
      ansTxt[ansTxtIdx++] = stk.top();
      stk.pop();
      ans[ansIdx++] = '-';
      ++givenIdx;
      continue;
    }
    stk.push(curr);
    ans[ansIdx] = '+';

    ++ansIdx;
    ++curr;
  }

  while(!stk.empty()) {
    ans[ansIdx++] = '-';
    ansTxt[ansTxtIdx++] = stk.top();
    stk.pop();
  }

  for(int i=0; i<n; ++i) {
    if(given[i] != ansTxt[i]) {
      printf("NO\n");
      return 0;
    }
  }
  ans[ansIdx] = '\0';
  for(int i=0; i<ansIdx; ++i) {
    printf("%c\n", ans[i]);
  }
  return 0;
}
