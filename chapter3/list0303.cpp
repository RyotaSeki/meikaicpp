#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    srand(time(NULL));
    int no  = rand() % 100;
    int x;

    cout << "kazu ate game wo simasu\n";
    cout << "0-99 no kazu wo atete kudasai\n";
    do{
        cout << "ikutu kana:";
        cin >> x;

        if(x>no){
            cout << "motto tiisana atai dayo\n";
        }
        else if(x<no){
            cout << "motto ookina atai dayo\n";
        }
    } while(x != no);

    cout << "seikai desu\n";
    return 0;   
}