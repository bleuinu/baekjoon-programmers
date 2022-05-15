#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main(){
  ios;
  list<char> str;
  string s;
  cin >> s;
  const int SIZE = s.size();
  for(int i=0; i<SIZE; ++i) {
    str.push_back(s[i]);
  }

  // cursor is at the end
  // dmih
  list<char>::iterator it = str.end();
  int m;
  cin >> m;
  while(m--) {
    char ch; 
    cin >> ch;
    if(ch == 'L') {
      if(it != str.begin()) --it;
    } else if(ch == 'D') {
      if(it != str.end()) ++it;
    } else if(ch == 'B') {
      if(it != str.begin()) {
        auto temp = it;
        --temp;
        str.erase(temp);
      }     
    } else if(ch == 'P') {
      char addCh; 
      cin >> addCh;
      str.insert(it, addCh);
    }
  }

  // print answer
  list<char>::iterator ans = str.begin();
  while(ans != str.end()) {
    cout << *ans;
    ++ans;
  }
  cout << endl;
  return 0;
}
