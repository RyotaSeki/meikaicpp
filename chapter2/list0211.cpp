#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "seisuu a:";    cin >> a;
    cout << "seisuu b:";    cin >> b;

    int min = a < b ? a : b;
    
    cout << "tiisai hou no atai ha" << min <<"desu\n";
}