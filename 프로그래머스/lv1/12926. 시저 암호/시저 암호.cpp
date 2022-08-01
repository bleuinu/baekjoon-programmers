#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i=0; i<s.size(); ++i) {
        if(s[i] == ' ') 
            continue;
        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = 97 + ((s[i]-97) + n)%26;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 65 + ((s[i]-65) + n)%26;
    }
    
    return s;
}