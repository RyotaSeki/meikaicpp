#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "seisuuti :";
    cin >> n;

    if(n == 0)
        cout << "sono atai ha zero desu \n";
    else if(n >=-9 && n<=9)
        cout << "sono atai ha hito keta desu \n";
    else 
        cout << "sono atai ha huta keta ijou desu \n";
}