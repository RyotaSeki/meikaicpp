#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    cout << "kazu wo nyuuryoku site kuda sai\n";
    int n,i=2;
    cin >> n;
    cout << "n=";
    for(i;i<=n;){
        //cout << "i=" << i  << "n=" << n << "\n" ;
        if(n % i == 0){
            cout << i ;
            if(n != i){
                cout << "*";
            }
            n /= i;
        }else i++;
    }
    return 0;   
}