#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

typedef long long ll;

constexpr long long mod = 15746;

int main(){
  ios;
  int n; 
  cin >> n;

  ll arr[1000001] = {1,2,3,5,8};
  for(int i=5; i<=n; ++i) {
    arr[i] = (arr[i-2]%mod + arr[i-1]%mod)%mod;
  }

  cout << arr[n-1] << endl;

  return 0;
}
