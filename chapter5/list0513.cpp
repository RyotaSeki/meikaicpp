#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int a[5][3];
    double b[4][2][3];

    cout << "hairetu a no kata : " << typeid(a).name() << endl;
    cout << "a no youso kata : " << typeid(a[0]).name() << endl;
    cout << "hairetu b no kata : " << typeid(b).name() << endl;
    cout << "b no youso kata : " << typeid(b[0]).name() << endl;
    return 0;   
}