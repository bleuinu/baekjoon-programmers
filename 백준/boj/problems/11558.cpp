#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;

  while(t--) {
    int arr[10002] = {0};
    int n; cin >> n;
    for(int i=1; i<=n; ++i) {
      cin >> arr[i];
    }

    int curr = 1;
    for(int i=1; i<10002; ++i) {
      curr = arr[curr];
      if(curr == n) {
        curr = -1*i;
        break;
      }
    }

    cout << ((curr<0) ? curr*-1 : 0) << endl;
  }
  return 0;
}
