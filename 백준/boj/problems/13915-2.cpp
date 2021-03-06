#include <bits/stdc++.h> 
using namespace std;

int h(int k) {
  int b = 0;
  while(k) {
    b |= (1 << (k%10));
    k /= 10;
  }
  return b;
}

int main() {
  int t;
  while(scanf("%d", &t) != EOF) {
    set<int> hashtable;
    while(t--) {
      int key; cin >> key;
      hashtable.insert(h(key));
    }
    cout << hashtable.size() << endl;
  }
  return 0;
}
