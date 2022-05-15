#include <bits/stdc++.h>
using namespace std;

int i;
int arr[10001];

int main() {
  char str[6];
  int n;
  scanf("%d", &n);

  while(n--) {
    scanf("%s", str);

    switch(str[0]) {
      case 'p': 
        {
          if(str[1] == 'u') {
            int v; scanf("%d", &v);
            arr[i] = v;
            ++i;
          } else {
            if(i > 0) {
              --i;
              printf("%d\n", arr[i]);
            } else {
              cout << -1 << endl;
            }
          }
          break;
        }
      case 't': { printf("%d\n", i==0 ? -1 : arr[i-1]); break; }
      case 's': { printf("%d\n", i); break; }
      case 'e': { printf("%d\n", i==0); break;}
    }
  }
  return 0;
}
