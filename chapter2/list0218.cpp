#include <iostream>

using namespace std;

int main()
{
    int hand;

    cout << "te wo erannde kuda sai(0...gu/1...tyoki/2...par):";
    cin >> hand;
    switch (hand)
    {
    case 0: cout << "gu\n"; break;
    case 1: cout << "tyoki\n"; break;
    case 2: cout << "par\n"; break;
    
    }
}