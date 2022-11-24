#include <iostream>
using namespace std;
// Funktionsprototyp
// Funktionsdeklaration
// Vi definierar namn, invärde(n), utvärde
// datatyp namn(datatyp1, datatyp2, ...);
float addera(float, float);
int main()
{
    // Funktionsanrop (att använda funktionen)
    float tal1 = 1.4;
    float tal2 = 1.2;
    // Jämför
    // int i = 7;
    // cout << i << endl;
    cout << addera(tal1,tal2);

    return 0;
}
// Funktionsdefinition
// datatyp namn(float a, float b)
float addera(float a, float b)
{
    float summa;
    summa = (a+b);
    // Returnerar (skickar tillbaka)
    return summa;
}
