#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;    
int main()
{
    //cout << "aiueo \n";
    
    srand(time(NULL));

    int luckey = rand() % 10;

    cout << "kyou no luckey nomumber ha" << luckey << "desu \n";
    
} 
