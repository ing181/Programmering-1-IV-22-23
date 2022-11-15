#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    // 13.1 - 13.1.1
    // Arryer, fält

    // På samma sätt
    // datatyp namn;
    // datatup namn[heltal]
    // Ett namn, många värden
    // Åtkomst genom indexering

    // sizeof(datatyp) // Hur stor plats i RAM-minnet tar vald datatyp?
    /* Exempel, beror på din utveklingsmiljö
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    */

    int talfalt[23];
    int tal;
    int intsize = sizeof(int);  // Hur stor plats i RAM-minnet tar en int?
    //cout << sizeof(tal) << endl;
     int minarraysize = sizeof(talfalt);
     cout << "Du har plats för " << (minarraysize / intsize) << " tal i din array" << endl;

     // iteration och array

     int falt[5] = {1,2,3,4,5};

     // Sök igenom falt, skriv ut värdena

     int i = 0;
     /*
     int faltsize = sizeof(falt);
     cout << "faltsize " << faltsize;
     while (i<faltsize) {

        cout << falt[i] << endl;
        i++; // i=(i+1);
     }
    */
    int j = 0;
    float f[5];
    while (j<5) {
         f[i] = j;
    }
    return 0;
}
