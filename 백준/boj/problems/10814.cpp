#include <bits/stdc++.h>
using namespace std; 
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main() {
  int t;
  cin >> t;

  map<int, list<string> > mymap;

  while(t--) {
    int age;
    string name;
    cin >> age;
    cin >> name;

    mymap[age].push_back(name);
  }

  auto it = mymap.begin();
  while(it != mymap.end()) {
    auto mylist = it->second;
    auto it2 = mylist.begin();
    while(it2 != mylist.end()) {
      cout << it->first << ' ' << *it2 << endl;
      ++it2;
    }
    ++it;
  }

  return 0;
}
