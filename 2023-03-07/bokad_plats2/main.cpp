#include <iostream>

using namespace std;

int main()
{
   // int *p = new int;
    int *p;
    p = new int;
    // p är en variabel som kan innehålla adressen till en int

    // Adressen till vår bokad plat för en int
    cout << p << endl;

    // "Det som finns på platsen p"
    cout << "1: " << *p << endl;

    // placera ett heltal på platsen p
    *p = 99;

    // "Det som finns på platsen p"
    cout << "2: " << *p << endl;

    delete p;

    return 0;
}
