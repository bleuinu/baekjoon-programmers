#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    if(s[0] == ')') return false;
    if(s.size() & 1) return false;
    
    stack<char> stk;
    for(char p : s) {
        if(p == '(') {
            stk.push(p);
        } else {
            if(stk.empty()) return false;
            stk.pop();
        }
    }
    
    return stk.empty();
}