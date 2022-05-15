#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(it,a) for(auto it=(a.begin());it!=(a.end());++it)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

vector<bool> v;
vector<set<int>> graph;

void dfs(int &u) {
  v[u] = true;
  cout << u << ' ';
  rep2(it, graph[u]) {
    if(v[*it] == false) {
      int _u = *it;
      dfs(_u);
    }
  }
}

void bfs(int &start) {
  queue<int> q;
  q.push(start);
  v[start] = true;

  while(!q.empty()) {
    int f = q.front();
    q.pop();

    cout << f << ' ';

    rep2(it, graph[f]) {
      if (!v[*it]) {
        q.push(*it);
        v[*it] = true;
      }
    }
  }
}

int main(){
  ios; cfs(15);

  int n, e, start;
  cin >> n >> e >> start;

  graph.assign(n+1, set<int>());

  rep(i, e) {
    int a,b;
    cin >> a >> b;
    graph[a].insert(b);
    graph[b].insert(a);
  }

  v.assign(n+1, false);
  dfs(start);
  v.clear();
  cout << endl;

  v.assign(n+1, false);
  bfs(start);

  return 0;
}
