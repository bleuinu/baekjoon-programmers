#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    
    auto found = 0;
    for(int i=0; i<phone_book.size()-1; ++i) {
        found = phone_book[i+1].find(phone_book[i]);
        if(found == 0) return false;
    }
    return true;
}