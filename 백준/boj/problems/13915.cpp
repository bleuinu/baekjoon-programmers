#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
  while(scanf("%d", &t) != EOF) {
    unordered_map<string, int> m;
    while(t--) {
      string s; cin >> s;
      sort(s.begin(), s.end());
      string ns = "";
      ns += s[0];
      for(size_t i=1; i<s.size(); ++i) {
        if(ns[ns.size()-1] != s[i]) ns += s[i];
      }
      m[ns] += 1;
    }

    auto it = m.begin();
    int cnt = 0;
    while(it != m.end()) {
      ++cnt; ++it;
    }

    cout << cnt << endl;
  }
  return 0;
}
