#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int max(int a,int b,int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    
    return max;
}

int main(){
    int math[3], eng[3];

    rep(i,3){
        cout << "[" << i + 1 << "]" ;
        cout << "suugaku : " ;  cin >> math[i];
        cout << "   eigo    : " ;  cin >> eng[i];
    }

    int max_math = max(math[0],math[1],math[2]);
    int max_eng = max(eng[0],eng[1],eng[2]);

    cout << "suugaku no saikou tokutenn ha" << max_math << "desu" << endl;
    cout << "eigo no saikou tokutenn ha" << max_eng << "desu" << endl;

    return 0;   
}