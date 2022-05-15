#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int foo(char ch) {
  if(ch >= 'A' && ch <= 'F') { return ch - 55; }
  else { return ch-'0'; }
}

int main(){
  ios; 
  string base16;
  cin >> base16;
  int base10 = 0;
  int p = 0;
  for(int i=base16.size()-1; i>=0; --i) {
    int v = foo(base16[i]);
    base10 += v * pow(16, p);
    ++p;
  }
  cout << base10 << endl;
  return 0;
}
