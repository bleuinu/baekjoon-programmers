#include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    int SIZE = new_id.size();
    for(int i=0; i<SIZE; ++i) {
        char ch = new_id[i];
        if(ch >= 'A' && ch <= 'Z') {
            answer += (ch += 32);
        } else if(ch == '-') {
            answer += '-';
        } else if(ch == '_') {
            answer += '_';
        } else if(ch == '.') {
            answer += '.';
        } else if(isalnum(ch)) {
            answer += ch;
        }
    }
    
    new_id = answer;
    bool wasDot = false;
    answer = "";
    SIZE = new_id.size();
    for(int i=0; i<SIZE; ++i) {
        if(answer.size() > 14) break; 
        if(new_id[i] == '.' && !wasDot && answer.size() > 0) {
            answer += new_id[i];
            wasDot = true;
        } else if(new_id[i] != '.') {
            answer += new_id[i];
            wasDot = false;
        }
    }
    
    if(answer[answer.size()-1] == '.') {
        answer.pop_back();
    }
    
    if(answer.size() == 0) answer += "a";
    
    while(answer.size() < 3) {
        answer += answer[answer.size()-1];
    }
    
    return answer;
}