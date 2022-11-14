#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int x;
    cout << "kaunnto down simasu\n";
    do{
        cout << "seino atai:";
        cin >> x;
    } while(x <=0);
    while (x>=0)
    {
        cout << x << "\n";
        x--;
    }
    
    return 0;   
}