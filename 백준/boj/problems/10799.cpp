#include <bits/stdc++.h> 
using namespace std;

int main() {
  stack<char> stk;
  string s;
  cin >> s;
  int sticks = 0;

  bool opened = false;

  for(char c : s) {
    if(c == '(') {
      opened = true;
      stk.push(c);
    } else if (c == ')') {
      stk.pop();
      if(opened) {
        opened = false;
        sticks += stk.size();
      } else {
        ++sticks;
      }
    }
  }

  cout << sticks << endl;

  return 0;
}
