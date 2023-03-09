#include <iostream>

using namespace std;

int main()
{
    // skapar en variabel som kan innehålla
    // adressen till en int
    // int *p = new int;
    // cout << p << endl; // adressen
    // eller
     int *p; //
     p = new int; //
    // p är en variabel som kan innehålla adressen till en int
    // Det som finns på adressen skrivs
    *p = 43; // "Det som finns på adressen p är
    // heltalet 43
    cout << *p << endl;

    *p = 77;
    cout << *p << endl;
    cout << p << endl; // adressen
    // Denna ty av variabel kallas "pekare"

     delete p;

    return 0;
}
