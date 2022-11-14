#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (n); ++i)

int main(){
    int n;
    cout << "mennseki ha:";
    cin >> n;
    //cout << "100%0=" << 100 % 0 << "\n";

    rep(i,n){
        //cout << "i=" << i <<"\n";
        if(i * i > n)break;
        if(n % i != 0)continue;
        cout << i << "X" << n / i << '\n';
    }
    return 0;   
}