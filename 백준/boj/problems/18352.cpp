#include <bits/stdc++.h>
using namespace std;

#define INF 0x7FFFFFFF

typedef pair<int,int> Pair;

class Graph
{
  private:
    int V;
    vector<vector<pair<int,int>>> adjlist;

  public:
    Graph(int v) : V(v)
  {
    adjlist.resize(V);
  }
    ~Graph() = default;

    void insertEdge(int s, int d, int w);
    void dijkstra(int src, int x);
};

void Graph::insertEdge(int s, int d, int w)
{
  adjlist[s].push_back(make_pair(d, w));
}

void Graph::dijkstra(int src, int x)
{
  vector<int> dist(V, INF);
  dist[src] = 0;

  priority_queue<int> pq;
  pq.push(src);

  while(!pq.empty())
  {
    int r = pq.top();
    pq.pop();

    for(auto &v : adjlist[r])
    {
      int cost = dist[r] + v.second;
      if(dist[v.first] > cost)
      {
        dist[v.first] = cost;
        pq.push(v.first);
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

int main()
{
  int n,m,k,x;
  scanf("%d %d %d %d", &n, &m, &k, &x);
  Graph graph(n+1);

  for(int i=0; i<m; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    graph.insertEdge(a, b, 1);
  }

  graph.dijkstra(x, k);

  return 0;
}
