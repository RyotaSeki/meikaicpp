#include <cctype>
#include <climits>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    cout << "kono syorikei no moji to moji ko-do" << endl;

    for(char i = 0 ; ; i++){
        switch(i){
            case '\a' : cout << "\\a"; break;
            case '\b' : cout << "\\b"; break;
            case '\f' : cout << "\\f"; break;
            case '\n' : cout << "\\n"; break;
            case '\r' : cout << "\\r"; break;
            case '\t' : cout << "\\t"; break;
            case '\v' : cout << "\\v"; break;
            default   : cout << ' ' << (isprint(i) ? i : ' ');
        }
    cout << ' ' << hex << int(i) << endl;

    if(i == CHAR_MAX) break;
    }
    return 0;   
}