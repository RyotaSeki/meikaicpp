#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n ;
    cout << "hidarisitatyokkakunonitouhennsannkakkeiwo hyouji simasu\n";
    cout <<"dannsuu ha:\n";
    cin >> n;
    rep(i,n){
        rep(j,i+1){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;   
}
