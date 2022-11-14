#include <iostream>

using namespace std;

int main()
{
    int hand;

    do{
        cout << "tewo erannde kudasai(0-gu/1-tyoki/2-pa) :";
        cin >> hand;
    }while (hand < 0 || hand > 2);

    switch(hand){
        case 0: cout << "gu\n"; break;
        case 1: cout << "thoki\n"; break;
        case 2: cout << "pa\n"; break;
    }
}