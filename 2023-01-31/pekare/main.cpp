#include <iostream>
using namespace std;
int main()
{
    int tal;
    tal = 2;
    cout << tal << endl;
    // H�r finns tal
    cout << &tal << endl;
    // Vi beh�ver en variabel som �r till f�r att
    // hantera sdresser till int
    // tal_adress tilldelas adressen till tal
    int *tal_adress = &tal;
    // Kommer �t platsen, med adressen
    // Vi kan nu p�verkadet som finns p� adressen
    // tal_adress
    // "Det som finns p� adressen tal_adress
    // ska ha v�rdet 4
    *tal_adress = 4;
    cout << tal << endl;
    return 0;
}
