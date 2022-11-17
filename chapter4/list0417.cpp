#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    enum animal { Dog, Cat, Monky, Invalid };
    int type;

    do{
        cout << "0...inu 1...neko 2...saru 3...end : ";
        cin >> type;
    }while(type < Dog || type > Invalid);

    if(type != Invalid){
        animal selected = static_cast<animal>(type);
        switch (selected)
        {
        case Dog : cout << "wann wann" << endl; break;
        case Cat : cout << "nyao" << endl; break;
        case Monky : cout << "kii" << endl; break;
        }
    }
    return 0;   
}