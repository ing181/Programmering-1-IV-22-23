#include <iostream>

using namespace std;

int main()
{
   // int temp;
   // temp = 0;
    int temp = 0;
   // Utf�r det som st�r mellan { }
   // s� l�nge som vilkoretr �r sant
   // Logiska operatorer anv�nds
   // ! "G�r sant till falskt, falskt till sant
   while (  !(temp < 100) ) {
        cout << temp << endl;
        temp = temp + 1;
    }
   // Tvinga att g�ra minst en g�ng
    do {
        cout << temp << endl;
       // temp = temp + 1;
       temp++;
    } while (  !(temp < 100) );

    return 0;
}
