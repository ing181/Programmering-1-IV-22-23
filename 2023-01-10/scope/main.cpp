#include <iostream>
using namespace std;
// Globala variabler finns, �r tillg�ngliga.
// dess scope �r i hela programmet.
// Inklusive i funktioner.
// Kan vara l�mpligt f�r variabler som inte ska kunna �ndras
// Deklarera d� dem som "const"
// En vanlig konvention �r att namnge dessa variabler
// med VERSALER.
const float PI = 3.141592;
// Inmatning av en cirkels radie, returnerar omkretsen.
float cirkel(float radie);

int main()
{

    // Var finns variablerna?
    // scope
    int j = 99;
    cout << PI << endl;
    cout << cirkel(1.1) << endl;

    // for-sats: Anv�nds hela tiden!
    // heltalsvariabel skapas; vilkor; f�r�ndring
    for (int i=0; i<5; i++)
    {
       cout << cirkel(i) << endl;
       cout << j << endl;
    }
    int k = 0;
    while (k < 5)
    {
       cout << cirkel(k) << endl;
       cout << j << endl;
       k++;
    }
    //cout << i << endl;
    // Man kommer �t arryens olika v�rden med hj�lp av index
    // indexeringen startar med 0
    //
    float falt[] = {1.1, 2.2, 3.3};
    cout falt[0] << endl; // 1.1
    cout falt[1] << endl; // 2.2
    cout falt[2] << endl; // 3.3
    return 0;
}
float cirkel(float radie)
{
    return (2*radie*PI);
}
