#include <iostream>

using namespace std;

int main()
{
   // int *p = new int;
    int *p;
    p = new int;
    // p �r en variabel som kan inneh�lla adressen till en int

    // Adressen till v�r bokad plat f�r en int
    cout << p << endl;

    // "Det som finns p� platsen p"
    cout << "1: " << *p << endl;

    // placera ett heltal p� platsen p
    *p = 99;

    // "Det som finns p� platsen p"
    cout << "2: " << *p << endl;

    delete p;

    return 0;
}
