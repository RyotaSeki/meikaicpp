#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x;

    cout << "jissuuti:";
    cin >> x;

    if(double m = fmod(x,10)){
        cout << "sono atai ha 10 de warikiri masenn\n";
        cout << "jouyo ha" << m << "desu \n";
    }else{
        cout << "sono atai ha 10 de wari kiremasu\n";
    }
}