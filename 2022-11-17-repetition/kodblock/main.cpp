#include <iostream>
using namespace std;
int main()
{
    // Variablers scoop
    // Var variabeln finns
            int i=0;

           // Error! i �r redan deklarerad
           // int i = 1;

            // eller while, for-sats
            if (i == 0) {
                // H�r g�r det bra att deklarera en ny
                // variabel i
                // OBS! Inte samma i som p� rad 7
                   int i = 4;
               // Har man inte deklarerat en ny i
               // existerar i fr�n rad 7
               // i detta underliggande kosblock
                cout << i << endl;
                int j = 7;
            }
    // Error! j finns inte h�r
    // cout << j << endl;
    int j = 5; // Inte samma j som p� rad 22

    // Inte obligatoriskt med {} om det
    // bara �r en sats efter vilkoret
    // Men alltid m�jligt att anv�nda {}
    if (j == 5)
        cout << "Det var 7" << endl;
    else
        cout << "Det var INTE 7" << endl;

    while (5==5)
        cout << "HEJ" << endl;

    return 0;
}
