#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)

int main(){
  ios; 
  int n;
  scanf("%d", &n);
  list<int> q;
  while(n--) {
    char command[6];
    scanf("%s", command);
    char ch = command[0];
    if(ch == 'p') {
      int v; scanf("%d", &v);
      if(command[1] == 'u') {
        q.insert(q.end(), v);
      } else {
        if(q.size()==0) {
          printf("-1\n");
        } else {
          printf("%d\n", q.front());
          q.pop_front();
        }
      }
    } else if(ch == 's') {
      printf("%lu\n", q.size());
    } else if(ch == 'e') {
      printf("%d\n", q.size() == 0);
    } else if(ch == 'f') {
      printf("%d\n", (q.size() == 0) ? -1 : q.front());
    } else if(ch == 'b') {
      printf("%d\n", (q.size() == 0) ? -1 : q.back());
    }
  }
  return 0;
}
