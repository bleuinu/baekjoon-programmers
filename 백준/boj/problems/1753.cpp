#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,k,n) for(ll i=(k);i<(n);++i)
#define endl '\n'
#define INF 0x7FFFFFFF

vector<int> cost(20001, INF);
vector<bool> visited(20001, false);
vector<pair<int, int>> graph[20001];

void dijkstra(int src){
  priority_queue<pair<int, int>> pq;
  pq.push(make_pair(0, src));
  while (!pq.empty()) {
    int dist = -pq.top().first;
    int curr = pq.top().second;
    pq.pop();

    if (cost[curr] < dist || visited[curr]) continue;
    visited[curr] = true;

    const int SIZE = graph[curr].size();
    rep(i, SIZE) {
      int f = graph[curr][i].first;
      int w = graph[curr][i].second + dist;

      if (cost[f] > w || cost[f] == 0) {
        cost[f] = w;
        pq.push(make_pair(-w, f));
      }
    }
  }
}

int main() { 

  int n, e, start;
  scanf("%d %d", &n, &e);
  scanf("%d", &start);

  rep(i, e) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    graph[a].push_back(make_pair(b,c));
  }

  dijkstra(start);

  rep2(i, 1, n+1) {
    if(i==start) printf("0\n");
    else if(cost[i] == INF) printf("INF\n");
    else printf("%d\n", cost[i]);
  }
  return 0;
}
