#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int a[4][3];
    cout << "hairetu a ha" << sizeof(a) / sizeof(a[0]) << "gyou"
        << sizeof(a[0]) / sizeof(a[0][0]) << "retu desu" << endl;

    cout << "kouseiyouso ha" << sizeof(a) / sizeof(a[0][0]) << "ko desu" << endl;
    return 0;   
}