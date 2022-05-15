#include <bits/stdc++.h> 
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main() {
  int n,m,t;
  scanf("%d", &n);
  vector<int> v;

  for(int i=0; i<n; ++i) {
    scanf("%d", &t);
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  scanf("%d", &m);
  for(int i=0; i<m; ++i) {
    scanf("%d", &t);
    int cnt = upper_bound(v.begin(), v.end(), t) - lower_bound(v.begin(), v.end(), t);
    printf("%d ", cnt);
  }
  printf("\n");

  return 0;
}
