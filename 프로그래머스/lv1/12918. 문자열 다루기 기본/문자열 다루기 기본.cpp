#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    for(char x : s) {
        if(x < '0' || x > '9') {
            return false;
        }
    }
    
    return (s.size() == 4 || s.size() == 6);
}