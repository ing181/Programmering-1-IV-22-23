#include <iostream>

using namespace std;

void meny();
void valde_1();
int main()
{
    system("chcp 1252");
    // H�r ska bara finnas funktioner
    meny();
    return 0;
}
void meny()
{
    int val;
    do {
    cout << "V�lj vad du vill g�ra" << endl;
    cout << "V�lj 0 f�r att avsluta"<< endl;
    cout << "V�lj 1 f�r att g�ra..."<< endl;
    cout << "V�lj 2 f�r att g�ra..."<< endl;
    cout << "V�lj 3 f�r att g�ra..."<< endl;
    cin >> val;

    switch (val) {
        case 1:
            valde_1();

        default:
            cout << "Felaktigt val!" << endl;
    }

    } while (val != 0);



}


void valde_1()
{
    cout << "V�lkommen till 1!" << endl;
}
