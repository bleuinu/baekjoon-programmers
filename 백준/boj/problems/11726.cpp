#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  const int MOD = 10007;
  int n;
  cin >> n;
  vector<unsigned> v(6, 0);
  v[1] = 1;
  v[2] = 2;
  v[3] = 3;
  v[4] = 5;
  v[5] = 8;
  for(int i=6; i<=n; ++i) 
    v.push_back((v[i-2]%MOD + v[i-1]%MOD)%MOD);

  cout << v[n] << endl;

  return 0;
}
