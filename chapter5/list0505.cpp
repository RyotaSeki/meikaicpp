#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)  

int main(){
    int a[] = {1,2,3,4,5};
    int a_size = sizeof(a) / sizeof(a[0]);
    cout << sizeof(a) << endl;
    cout << sizeof(a[0]) << endl;
    rep(i,a_size){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;   
}