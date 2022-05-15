#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main(){
  ios; 
  int k,n;
  cin >> n >> k;
  list<int> l;
  queue<int> q;

  for(int i=0; i<n; ++i) l.push_back(i);

  auto it = l.begin();
  while(!l.empty()) {
    for(int i=0; i<k; ++i) {
      ++it;
      if(it == l.end()) it = l.begin();
    }

    q.push((*it == 0) ? n : *it);
    auto temp = it;
    --it;
    l.erase(temp);
  }

  cout << "<";
  while(q.size() > 1) {
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << ">\n";

  return 0;
}
