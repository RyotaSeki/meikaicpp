#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int x,y;

    cout << "hutatu no seituuti x to y no heikinnti wo motomemasu" << endl;
    cout << "x no atai : "; cin >> x;
    cout << "y no atai : "; cin >> y;

    double ave = static_cast<double>(x + y) / 2;
    cout << "x to y no heikinnti ha" << ave << "desu" << endl;
    return 0;   
}