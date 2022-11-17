#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n = 5;
    vector<int> tensu(n);
    int sum = 0 ;

    cout << n << "ninn no tennsuu to heikinn tenn wo motomemasu" << endl;
    rep(i,n){
        cout << i + 1 << "bann no tennsuu : ";
        cin >> tensu[i];
        sum += tensu[i];
    }
    cout << "goukei ha" << sum << "tenn desu" << endl;
    cout << "heikinntenn ha" << static_cast<double>(sum) / n << "tenn desu" << endl;
    return 0;   
}