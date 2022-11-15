#include <iostream>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    char c;
    short h;
    int i;
    long l;

    cout << "hennsuu c no kata : " << typeid(c).name() << endl;
    cout << "hennsuu h no kata : " << typeid(h).name() << endl;
    cout << "hennsuu i no kata : " << typeid(i).name() << endl;
    cout << "hennsuu l no kata : " << typeid(l).name() << endl;

    cout << "moji riteraru 'A' no kata : " << typeid('A').name() << endl;
    cout << "seisuu riteraru '100' no kata : " << typeid(100).name() << endl;
    cout << "seisuu riteraru '100U' no kata : " << typeid(100U).name() << endl;
    cout << "seisuu riteraru '100L' no kata : " << typeid(100L).name() << endl;
    cout << "seisuu riteraru '100UL' no kata : " << typeid(100UL).name() << endl;
    return 0;   
}