#include <iostream>

using namespace std;

int main()
{
    // Operatorer f�r att g�mf�ra
    // <, <=, >, >=, ==
    // and &&
    // or ||
    // R�cker om en av delvilkoren �r sant ||
    // B�da sanna &&
    if ( ((1==2) || (2>1)) && (2>3) ) {
        cout << "Sant!" << endl;
    }
    else {
        cout << "Falskt!" << endl;
    }

    return 0;
}
