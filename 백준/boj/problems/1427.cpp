#include <iostream> 
using namespace std;

int main() {
  string s;
  cin >> s;

  const int SIZE = s.length();
  for(int i=0; i<SIZE; ++i) {
    bool swapped = false;
    for(int j=0; j<SIZE-1-i; ++j) {
      if(s[j] < s[j+1]) {
        char temp = s[j];
        s[j] = s[j+1];
        s[j+1] = temp;
        swapped = true;
      }
    }
    if(!swapped) break;
  }

  cout << s << endl;

  return 0;
}
