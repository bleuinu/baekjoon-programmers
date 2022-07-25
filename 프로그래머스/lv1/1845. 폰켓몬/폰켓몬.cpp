#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    vector<int> uniq;
    int select = nums.size() >> 1;
    nums.push_back(200001);
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; ++i) {
        if(nums[i] != nums[i+1]) {
            uniq.push_back(nums[i]);
        }
    }
    
    if(uniq.size() >= select) return select;
    else return uniq.size();
}