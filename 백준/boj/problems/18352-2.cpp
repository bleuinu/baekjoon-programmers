#include <bits/stdc++.h> 
using namespace std; 

#define INF 0x7FFFFFFF

typedef vector<vector<int>> vvi;

void dijkstra(int V, int src, int x, vvi &graph)
{
  vector<int> dist(V, INF);
  dist[src] = 0;

  priority_queue<int> pq;
  pq.push(src);

  while(!pq.empty())
  {
    int r = pq.top();
    pq.pop();

    for(auto &v : graph[r])
    {
      int cost = dist[r] + 1;
      if(dist[v] > cost)
      {
        dist[v] = cost;
        pq.push(v);
      }
    }
  }

  bool printed = false;
  for(int i=0; i<V; ++i) {
    if(dist[i] == x)  {
      printed  = true;
      printf("%d\n", i);
    }
  }

  if(!printed) printf("-1\n");
}

int main() {
  int n, m, k, s;
  scanf("%d%d%d%d", &n, &m, &k, &s);
  vvi graph(n+1);

  for(int i=0; i<m; ++i) {
    int s, d;
    scanf("%d%d", &s, &d);
    graph[s].push_back(d);
  }

  dijkstra(n+1, s, k, graph);

  return 0;
}
