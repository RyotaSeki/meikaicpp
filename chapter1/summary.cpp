#include <ctime>
#include <cstdlib>
#include <string> 
#include <iostream>

using namespace std;    

int main()
{
    int a;
    a=1;
    int b =5;

    srand(time(NULL));
    int luckey = rand() % 10;
    cout << "kyou no luckey number ha"<< luckey << "desu \n";
    cout << "2 de watta shou ha"<< luckey / 2 << "desu \n";
    cout << "2 de watta jouyo ha"<< luckey % 2 << "desu \n";
    
    const double PI = 3.14;
    double r;
    cout << "hannkei:";
    cin >> r;
    cout << "hannkei" << r << "no enn no mennseki ha"
        << (PI * r*r) << "desu \n";
    
    string name;
    
    cout <<"onamae ha \n";
    cin >> name;

    cout << "konnn"  "ichiwa" << name << "sann. \n";
} // namespace