#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    // 13.1 - 13.1.1
    // Arryer, f�lt

    // P� samma s�tt
    // datatyp namn;
    // datatup namn[heltal]
    // Ett namn, m�nga v�rden
    // �tkomst genom indexering

    // sizeof(datatyp) // Hur stor plats i RAM-minnet tar vald datatyp?
    /* Exempel, beror p� din utveklingsmilj�
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
     cout << "Du har plats f�r " << (minarraysize / intsize) << " tal i din array" << endl;

     // iteration och array

     int falt[5] = {1,2,3,4,5};

     // S�k igenom falt, skriv ut v�rdena

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
