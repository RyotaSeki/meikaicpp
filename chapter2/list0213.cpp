#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "seisuu a:";    cin >> a;
    cout << "seisuu b:";    cin >> b;

    int min,max;
    if(a<b)
        min=a,max=b;
    else
        min=b,max=a;
    
    cout << "tiisai hou no atai ha" << min <<"desu\n";
    cout << "ookii  hou no atai ha" << max <<"desu\n";
}