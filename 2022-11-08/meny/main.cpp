#include <iostream>
using namespace std;

int main()
{
    system("chcp 1252");

    bool goon = true;
    while (goon) {

        int val;

        cout << "1. G�r detta" << endl;
        cout << "2. G�r detta" << endl;
        cout << "3. Avsluta" << endl;
        cin >> val;

        switch (val) {
    case 1:
        cout << "Du valde 1" << endl;
        break;
    case 2:
        cout << "Du valde 2" << endl;
        break;
    case 3:
        cout << "Tack f�r att du anv�nder mitt program" << endl;
        goon = false;
        break;
    default:
        cout << "Felaktig inmatning" << endl;
        }


    }
    return 0;
}
