#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    cout << "Hur stor array beh�ver du? ";
    int antal;
    cin >> antal;

    // Det reservaerade ordet "new"
    int *array = new int[antal];
    cout << array << endl; // 0x18b3a451b80
    cout << *array << endl; // ??? Odifinierat inneh�ll
    // Det som r�kar finnas d�r.
    //int array[antal];

    for (int i=0; i<antal; i++) {
        array[i] = i;
    }
    // * betyder det som finns p� adressen
    cout << *array << endl; // Sj�lva variabelnamnet �r adressen till
    // v�rdet p� index=0
    cout << array << endl; // 0x18b3a451b80
    return 0;
}
