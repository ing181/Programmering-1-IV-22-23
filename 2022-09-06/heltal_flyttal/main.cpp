#include <iostream>

using namespace std;

int main()
{
    /*
    operatorer �r relaterade till
    variabler till h�ger om, och till
    v�nster operatorn

    Numeriska (r�kne) operatorer
    + (addition), - (subtraktion), * (multiplikation)
    / (division) och % (modulus)
    */
    int tal1;
    tal1 = 5;
    int tal2;
    tal2 = 3;
    cout << ( tal1 / tal2 ) << endl;
    cout << ( tal1 % tal2 ) << endl;

    float ftal1;
    ftal1 = 5;
    float ftal2;
    ftal2 = 3;

        cout << ( ftal1 / ftal2 ) << endl;
      // funkar INTE med flyttal (decimaltal)
      //cout << ( ftal1 % ftal2 ) << endl;

    return 0;
}
