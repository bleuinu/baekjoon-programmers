#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=1;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int dist[102][102];
int graph[102][102];

int bfs(int &row, int &col) {
  queue<pair<int,int>> q;

  dist[1][1] = 1;
  q.push(make_pair(1, 1));

  while(!q.empty()) {
    auto f = q.front();
    q.pop();
    int x = f.first;
    int y = f.second;

    if(graph[x+1][y] && !dist[x+1][y]) {
      dist[x+1][y] = dist[x][y] + 1; 
      q.push(make_pair(x+1, y));
    }

    if(graph[x-1][y] && !dist[x-1][y]) {
      dist[x-1][y] = dist[x][y] + 1; 
      q.push(make_pair(x-1, y));
    }

    if(graph[x][y+1] && !dist[x][y+1]) {
      dist[x][y+1] = dist[x][y] + 1; 
      q.push(make_pair(x, y+1));
    }

    if(graph[x][y-1] && !dist[x][y-1]) {
      dist[x][y-1] = dist[x][y] + 1; 
      q.push(make_pair(x, y-1));
    }
  }

  return dist[row][col];
}

int main(){
  ios; cfs(15);

  int row,col;
  scanf("%d %d", &row, &col);
  getchar();

  rep(i, 102) {
    rep(j, 102) {
      graph[i][j] = 0;
    }
  }

  rep(i, row+1) {
    rep(j, col+1) {
      graph[i][j] = getchar() - '0';
    }
    getchar(); // newline?
  }

  printf("%d\n", bfs(row, col));

  return 0;
}
