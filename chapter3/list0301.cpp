#include <string>
#include <iostream>

using namespace std;

int main()
{
    string retry;

    do {
        int month ;
        cout << "kisetu wo kimemasu. \n nanngaru desuka:";
        cin >> month;

        if(month >= 3 && month <=5)
            cout << "soreha haru desu.\n";
        else if(month >= 6 && month <=8)
            cout << "soreha natu desu.\n";
        else if(month >= 9 && month <=11)
            cout << "soreha aki desu.\n";
        else if(month == 12 || month == 1 || month == 2)
            cout << "soreha huyu desu.\n";
        else 
            cout << "sonnna tuki ha arimasenn yo.\n";
        
        cout << "mouitido ? Y...Yes/N...No:";
        cin >> retry;
    }while (retry == "Y" || retry == "y");
    
}