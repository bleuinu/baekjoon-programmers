#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int rank[] = {6,6,5,4,3,2,1};
    vector<int> answer;
    int zero = 0;
    int hit = 0;
    
    for(int i=0; i<lottos.size(); ++i) {
        int num = lottos[i];
        if(num == 0) {
            ++zero;
            continue;
        }
        
        for(int j=0; j<win_nums.size(); ++j) {
            if(win_nums[j] == num) {
                ++hit;
                break;
            }
        }
    }
    
    answer.push_back(rank[hit+zero]);
    answer.push_back(rank[hit]);
    
    return answer;
}