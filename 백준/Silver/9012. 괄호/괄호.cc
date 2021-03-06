#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    if((s.size()&1)==1 || s[0]==')') {
      cout << "NO" << endl;
    } else {
      stack<char> stk;
      for(int i=0; i<s.size(); ++i) {
        if(s[i] == '(') stk.push(s[i]);
        else {
          if(stk.empty()) {
            stk.push('X');
            break;
          } else {
            stk.pop();
          }
        }
      }
      
      if(stk.empty()) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }
  return 0;
}