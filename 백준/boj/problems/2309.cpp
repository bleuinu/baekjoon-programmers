#include <bits/stdc++.h>
using namespace std;
int main(void) {
  bool arr[100]={0};
  int sum=0;
  for(int i=0; i<9; ++i) {
    int x; cin>>x;
    arr[x] = 1;
    sum += x;
  }

  int target = sum - 100;
  for(int i=0; i<100; ++i) {
    if(!arr[i]) continue;
    for(int j=99; j>0; --j) {
      if(!arr[j]) continue;
      if(i+j == target) {
        arr[i] = arr[j] = 0;
        i = 100;
        break;
      }
    }
  }

  cout << endl;
  for(int i=0; i<100; ++i) 
    if(arr[i]) cout << i << endl;

  return 0;
}
