#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); ++i) {
       vector<int> temp;
       for(int j=0; j<arr2[0].size(); ++j) {
           int x=0;
           for(int k=0; k<arr1[i].size(); ++k) {
               // cout << arr1[i][k] << ' ' << arr2[k][j] << endl;
               x += (arr1[i][k] * arr2[k][j]);
           }
           // cout << x << endl;
           temp.push_back(x);
       }
        answer.push_back(temp);
    }
    
    return answer;
}