#include <bits/stdc++.h>

using namespace std;

void pattern1(string &s) {
    int size = s.size();
    for(int i=0; i<size; ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

string solution(string new_id) {
    string answer = "";

    regex p2 ("[^\\w-_.]");
    regex p3 ("\\.+");
    regex p4 ("^\\.|\\.$");
    regex p5 ("^$");
    
    answer = regex_replace(new_id, p2, "");
    answer = regex_replace(answer, p3, ".");
    answer = regex_replace(answer, p4, "");
    answer = regex_replace(answer, p5, "a");
    
    pattern1(answer);
    
    answer = answer.substr(0, 15);
    answer = regex_replace(answer, p4, "");
    
    //pattern 7
    while(answer.size() < 3) {
        answer += answer[answer.size()-1];
    }
    
    return answer;
}