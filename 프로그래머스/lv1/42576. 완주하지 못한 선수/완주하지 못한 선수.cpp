#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> runner;
    for(string s : participant) {
        runner[s] += 1;
    }
    
    for(string s : completion) {
        runner[s] -= 1;
    }
    
    map<string, int>::iterator it = runner.begin();
    while(it != runner.end()) {
        if(it->second > 0) {
            return it->first;
        }
        ++it;
    }
}