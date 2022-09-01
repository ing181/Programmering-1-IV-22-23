#include <iostream>

using namespace std;

int main()
{
    cout << "How old are you?" << endl;
    int age;
    // Inmatning till age från tangentbordet
    cin >> age;
    // Hårdkodat
    //age = 16;
    cout << "You are " << age << " years old" << endl;
    // Gämförelseoperatorn ==
    // "Det som är till vänster om == jämförs med
    // det som är till höger om ==
    // OBS! Allt går att jämföra. Men det måste
    // entydigt gå att avgöra om det är sant eller falskt
    // == Lika
    // < mindre än
    // <= mindre än eller lika
    // > större än
    // >= större än eller lika med
    // Om det som står mellan ( ) är sant,
    // gör det som står mellan { }
    if (age >= 12) {
        cout << "24 kronor!" << endl;
    }
    // Annars (om det är falskt) gör det som står
    // mellan { }
    else {
        cout << "12 kronor!" << endl;
    }

    return 0;
}
