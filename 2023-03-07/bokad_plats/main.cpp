#include <iostream>
using namespace std;
int main()
{
    cout << "Hur stor array vill du ha? ";
    int antal;
    cin >> antal;
     // Här lägger programmet intar på ej reserverade platser
     // "Du är reseledare, och placerar din grupp på
     // icke reserverade platser i tåget"
    // int intArray[antal];
    // Här skapas plats i minnet
    // int aintArray[antal];

    int *intArray = new int[antal];
    // int intArray[antal];
    for (int i=0; i<antal; i++)
    {
        intArray[i] = i;

    }
    for (int i=0; i<antal; i++)
    {
        cout << intArray[i] << endl;
    }

    delete[] intArray;



    return 0;
}
