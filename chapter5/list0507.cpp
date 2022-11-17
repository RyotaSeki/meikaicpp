#include <iostream>
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    //vector<int> a(5);
    //vector<double> b(7);
    int a[5];
    double b[7];

    cout << "hairetu a no kata : " << typeid(a).name() << endl;
    cout << "a no youso kata : " << typeid(a[0]).name() << endl;

    cout << "hairetu b no kata : "<< typeid(b).name() << endl;
    cout << "b no youso kata : " << typeid(b[0]).name() << endl;
    return 0;   
}