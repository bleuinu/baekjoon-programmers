#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> ans;
    map<string, int> gotReported;
    map<string, vector<string> > whoReported;
    for(string user : id_list) {
        gotReported[user] = 0;
    }
    
    size_t pos = 0;
    string src, dest;
    for(string users : report) {
        pos = users.find((" "));
        src = users.substr(0, pos);
        users.erase(0, pos + 1);
        pos = users.find(" ");
        dest = users.substr(0, pos);
        
        vector<string> vec = whoReported[src];
        if(find(vec.begin(), vec.end(), dest) != vec.end()) continue;
        
        gotReported[dest] += 1;
        whoReported[src].push_back(dest);
    }

    for(string user : id_list) {
        if(whoReported[user].size() == 0) {
            ans.push_back(0);
        } else {
            int cnt = 0;
            for(string id : whoReported[user]) {
                if(gotReported[id] >= k) {
                    ++cnt;
                }
            }
            ans.push_back(cnt);
        }
    }
    
    return ans;
}