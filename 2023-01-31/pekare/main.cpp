#include <iostream>
using namespace std;
int main()
{
    int tal;
    tal = 2;
    cout << tal << endl;
    // Här finns tal
    cout << &tal << endl;
    // Vi behöver en variabel som är till för att
    // hantera sdresser till int
    // tal_adress tilldelas adressen till tal
    int *tal_adress = &tal;
    // Kommer åt platsen, med adressen
    // Vi kan nu påverkadet som finns på adressen
    // tal_adress
    // "Det som finns på adressen tal_adress
    // ska ha värdet 4
    *tal_adress = 4;
    cout << tal << endl;
    return 0;
}
