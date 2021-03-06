#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int base = x;
    
    for(int i=1; i<=n; ++i) {
        answer.push_back(x);
        x += base;
    }
    
    return answer;
}