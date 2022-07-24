#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(vector<int> command : commands) {
        int i = command[0];
        int j = command[1];
        int k = command[2];
        
        vector<int>::const_iterator first = array.begin() + i-1;
        vector<int>::const_iterator last = array.begin() + j;
        vector<int> sub(first, last);
        sort(sub.begin(), sub.end());
        
        answer.push_back(sub[k-1]);
    }
    
    return answer;
}