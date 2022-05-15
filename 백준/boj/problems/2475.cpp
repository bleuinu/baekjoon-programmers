#include <iostream> 
using namespace std;
int main() {
  int ans=0;
  for(int i=0; i<5; ++i) {
    int v; cin >> v;
    ans += (v*v);
  }
  cout << ans%10 << endl;
  return 0;
}
