#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prog, vector<int> spds) {
    vector<int> days;
    vector<int> ans;
    
    for(int i=0; i<prog.size(); ++i) {
        int x = 100-prog[i];
        x = x/spds[i] + !!(x%spds[i]);
        days.push_back(x);    
    }
    
    int cnt = 1;
    for(int i=1; i<days.size(); ++i) {
        if(days[i] <= days[i-1]) {
            ++cnt;
            days[i] = days[i-1];
        } else {
            ans.push_back(cnt);
            cnt = 1;
        }
    }
    ans.push_back(cnt);
    
    return ans;
}