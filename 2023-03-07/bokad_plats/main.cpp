#include <iostream>
using namespace std;
int main()
{
    cout << "Hur stor array vill du ha? ";
    int antal;
    cin >> antal;
     // H�r l�gger programmet intar p� ej reserverade platser
     // "Du �r reseledare, och placerar din grupp p�
     // icke reserverade platser i t�get"
    // int intArray[antal];
    // H�r skapas plats i minnet
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
