#include <iostream>

using namespace std;

int main()
{
    // Operatorer för att gämföra
    // <, <=, >, >=, ==
    // and &&
    // or ||
    // Räcker om en av delvilkoren är sant ||
    // Båda sanna &&
    if ( ((1==2) || (2>1)) && (2>3) ) {
        cout << "Sant!" << endl;
    }
    else {
        cout << "Falskt!" << endl;
    }

    return 0;
}
