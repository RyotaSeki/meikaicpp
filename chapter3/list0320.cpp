#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cout << "seisuu wo kasann simasu.\n";
    cout << "nannko kasann simasuka?:";
    cin >> n;
    cout << "9999 de kyousei syuuryou simasu\n";

    int sum=0;
    rep(i,n){
        int t;
        cout << "seisuu:";
        cin >> t;
        if(t == 9999)
            goto Exit;
        sum += t;
    }
    cout << "goukei ha" << sum << "desu\n";

Exit: 
    return 0;   
}