#include <iostream>
using namespace std;
// Globala variabler finns, är tillgängliga.
// dess scope är i hela programmet.
// Inklusive i funktioner.
// Kan vara lämpligt för variabler som inte ska kunna ändras
// Deklarera då dem som "const"
// En vanlig konvention är att namnge dessa variabler
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

    // for-sats: Används hela tiden!
    // heltalsvariabel skapas; vilkor; förändring
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
    // Man kommer åt arryens olika värden med hjälp av index
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
