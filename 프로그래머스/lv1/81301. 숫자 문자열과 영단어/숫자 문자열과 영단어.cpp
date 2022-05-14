#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    regex p0("zero");
    regex p1 ("one");
    regex p2 ("two");
    regex p3 ("three");
    regex p4 ("four");
    regex p5 ("five");
    regex p6 ("six");
    regex p7 ("seven");
    regex p8 ("eight");
    regex p9 ("nine");
    
    s = regex_replace(s, p0, "0");    
    s = regex_replace(s, p1, "1");
    s = regex_replace(s, p2, "2");
    s = regex_replace(s, p3, "3");
    s = regex_replace(s, p4, "4");
    s = regex_replace(s, p5, "5");
    s = regex_replace(s, p6, "6");
    s = regex_replace(s, p7, "7");
    s = regex_replace(s, p8, "8");
    s = regex_replace(s, p9, "9");
    
    answer = stoi(s, nullptr, 10);
    return answer;
}