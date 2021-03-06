#include <bits/stdc++.h> 
using namespace std;

struct comp {
  inline bool operator() (string a, string b) {
    if(a.size() < b.size()) return true;
    else if(a.size() > b.size()) return false;
    else {
      int asum = 0;
      int bsum = 0;

      for(char c : a)
        if(c >= '0' && c <= '9') asum += (c-'0');
      for(char c : b)
        if(c >= '0' && c <= '9') bsum += (c-'0');

      if(asum < bsum) return true;
      else if(asum > bsum) return false;
      else return (a.compare(b) < 0 ? true : false);
    }
  }
};

int main() {
  int t;
  cin >> t;
  vector<string> s;
  while(t--) {
    string t; cin >> t;
    s.push_back(t);
  }

  sort(s.begin(), s.end(), comp());

  for(string v : s) cout << v << endl;

  return 0;
}
