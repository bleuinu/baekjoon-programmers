#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  priority_queue<int, vector<int>, greater<int>> q;

  for(int i=0; i<n; ++i) {
    vector<int> t;
    int p, l;
    cin >> p >> l;

    for(int i=0; i<p; ++i) {
      int v;
      cin >> v;
      t.push_back(v);
    }

    if(p < l) {
      q.push(1);
      continue;
    }

    sort(t.rbegin(), t.rend());
    q.push(t[l-1]);
  }

  int cnt = 0;
  while(true) {
    if(cnt >= n) break;
    int min = q.top();
    if(min > m) break;
    q.pop();
    m -= min;
    ++cnt;
  }

  cout << cnt << endl;
  return 0;
}
