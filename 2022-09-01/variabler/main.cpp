#include <iostream>

using namespace std;

int main()
{
    cout << "How old are you?" << endl;
    int age;
    // Inmatning till age fr�n tangentbordet
    cin >> age;
    // H�rdkodat
    //age = 16;
    cout << "You are " << age << " years old" << endl;
    // G�mf�relseoperatorn ==
    // "Det som �r till v�nster om == j�mf�rs med
    // det som �r till h�ger om ==
    // OBS! Allt g�r att j�mf�ra. Men det m�ste
    // entydigt g� att avg�ra om det �r sant eller falskt
    // == Lika
    // < mindre �n
    // <= mindre �n eller lika
    // > st�rre �n
    // >= st�rre �n eller lika med
    // Om det som st�r mellan ( ) �r sant,
    // g�r det som st�r mellan { }
    if (age >= 12) {
        cout << "24 kronor!" << endl;
    }
    // Annars (om det �r falskt) g�r det som st�r
    // mellan { }
    else {
        cout << "12 kronor!" << endl;
    }

    return 0;
}
