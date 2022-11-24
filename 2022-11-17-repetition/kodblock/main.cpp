#include <iostream>
using namespace std;
int main()
{
    // Variablers scoop
    // Var variabeln finns
            int i=0;

           // Error! i är redan deklarerad
           // int i = 1;

            // eller while, for-sats
            if (i == 0) {
                // Här går det bra att deklarera en ny
                // variabel i
                // OBS! Inte samma i som på rad 7
                   int i = 4;
               // Har man inte deklarerat en ny i
               // existerar i från rad 7
               // i detta underliggande kosblock
                cout << i << endl;
                int j = 7;
            }
    // Error! j finns inte här
    // cout << j << endl;
    int j = 5; // Inte samma j som på rad 22

    // Inte obligatoriskt med {} om det
    // bara är en sats efter vilkoret
    // Men alltid möjligt att använda {}
    if (j == 5)
        cout << "Det var 7" << endl;
    else
        cout << "Det var INTE 7" << endl;

    while (5==5)
        cout << "HEJ" << endl;

    return 0;
}
