#include <bits/stdc++.h>
using namespace std;
int main() {
  stack<int> s;
  int t;
  cin >> t;
  while(t--) {
    int v; cin >> v;
    if(!s.empty() && v == 0) s.pop();
    else s.push(v);
  }

  int sum=0; 
  while(!s.empty()) {
    sum += s.top();
    s.pop();
  }

  cout << sum << endl;
  return 0;
}
