#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main(){
  ios; 

  while(1) {
    string s;
    string ans = "";
    getline(cin, s);

    if(s.size() == 1 && s[0]=='.') {
      break;
    }

    stack<char> stk;
    int size = s.size();
    bool found = false;
    for(int i=0; i<size; ++i) {
      if((s[i] == ')' || s[i] == ']') && stk.empty()) {
        cout << "no" << endl;
        found = true;
        break;
      }

      if(s[i]=='(' || s[i]=='[') {
        stk.push(s[i]);
      } else if(s[i]==')') {
        if(stk.empty() || stk.top() == '[') {
          cout << "no" << endl;
        found = true;
          break;
        } else {
          stk.pop();
        }
      } else if (s[i] == ']') {
        if(stk.empty() || stk.top() == '(') {
          cout << "no" << endl;
        found = true;
          break;
        } else {
          stk.pop();
        }
      }
    }

    if(!found) {
      cout << ( (stk.empty()) ? "yes" : "no" ) << endl;
    }
  }

  return 0;
}
