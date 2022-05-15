#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main(){
  ios; 
  int t;
  cin >> t;

  while(t--) {
    list<pair<int, int> > q;
    priority_queue<int> pq;
    int cnt = 1;
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; ++i) {
      int val; cin >> val;
      q.push_back(make_pair(val, i));
      pq.push(val);
    }

    while(true) {
      if(q.front().first < pq.top()) {
        q.push_back(q.front());
        q.pop_front();
      } else {
        if(q.front().second == m) break;
        q.pop_front();
        pq.pop();
        ++cnt;
      }
    }

    cout << cnt << endl;
  }
  return 0;
}
