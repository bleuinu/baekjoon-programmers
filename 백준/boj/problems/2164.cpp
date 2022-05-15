#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main(){
  ios; 
  list<int> card;
  int n;
  cin >> n;

  for(int i=0; i<n; ++i) {
    card.push_back(i+1);
  }

  while(card.size() > 1) {
    card.pop_front();
    card.push_back(card.front());
    card.pop_front();
  }
  cout << card.front() << endl;

  return 0;
}
