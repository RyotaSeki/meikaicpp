#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "seisuuti:";
    cin >> n;

    if(int mod = n % 10){
        cout << "sono atai ha 10 de warikiri masenn\n";
        cout << "sai ka i keta ha" << mod << "desu \n";
    }else{
        cout << "sono atai ha 10 de wari kiremasu\n";
    }
}