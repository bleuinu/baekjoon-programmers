#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &list, vector<bool> &visited, int v) {
  visited[v] = true;

  vector<int> neighbors = list[v];
  for(int x : neighbors) {
    if(!visited[x]) dfs(list, visited, x);
  }
}

int main() {
  int v, e;
  scanf("%d %d", &v, &e);
  vector<vector<int>> adjlist(v+1);
  vector<bool> visited(v+1, false);

  for(int i=0; i<e; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    adjlist[a].push_back(b);
    adjlist[b].push_back(a);
  }

  int cnt = 0;
  for(int i=1; i<=v; ++i) {
    if(visited[i] == false) {
      dfs(adjlist, visited, i);
      ++cnt;
    }
  }

  printf("%d\n", cnt);
  return 0;
}
