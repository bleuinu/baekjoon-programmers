#include <bits/stdc++.h>
using namespace  std;

int main() {
  string s; 
  cin >> s;
  int zero=0, one=0;

  const int SIZE = s.size ();
  for(int i=0; i<SIZE; ++i) {
    if(s[i]=='0') {
      while(s[i]=='0') ++i;
      ++zero;
    }
  }
  for(int i=0; i<SIZE; ++i) {
    if(s[i]=='1') {
      while(s[i]=='1') ++i;
      ++one;
    }
  }

  cout << min(one, zero) << endl;

  return 0;
}
