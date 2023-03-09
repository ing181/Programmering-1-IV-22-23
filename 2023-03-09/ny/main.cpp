#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    cout << "Hur stor array behöver du? ";
    int antal;
    cin >> antal;

    // Det reservaerade ordet "new"
    int *array = new int[antal];
    cout << array << endl; // 0x18b3a451b80
    cout << *array << endl; // ??? Odifinierat innehåll
    // Det som råkar finnas där.
    //int array[antal];

    for (int i=0; i<antal; i++) {
        array[i] = i;
    }
    // * betyder det som finns på adressen
    cout << *array << endl; // Själva variabelnamnet är adressen till
    // värdet på index=0
    cout << array << endl; // 0x18b3a451b80
    return 0;
}
