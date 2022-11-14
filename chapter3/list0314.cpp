#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i <= (n); ++i)

int main(){
    rep(i,9){
        rep(j,9){
            cout << setw(3) << i*j;
        }
        cout << "\n";
    }
    return 0;   
}