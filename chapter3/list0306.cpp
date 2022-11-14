#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cout << "nannko hyouji simasuka ?\n";
    cin >> n;
    if(n>0){

        // rep(i,n){
        //     cout << "*";
        // }
        
        // int i=0;
        // while (i < n)
        // {
        //     cout << '*';
        //     i++;
        // }

        int i=0;  
        while (i++ < n)
        {            
            cout << '*';
        }
        
        
        
        cout << '\n';
    }
    return 0;   
}