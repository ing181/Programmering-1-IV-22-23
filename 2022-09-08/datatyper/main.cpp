#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    // Flyttal (decimaltal)
    float f;
    f = 1.78;
    float f1;
    f1 = 2.2;
    // + - * /
    cout << (f1/f) << endl;
    // % funkar bara med heltal
    // cout << (f1%f) << endl;

    // boolsk
    bool b;
    b = (1>2);
    // Utskrift 0 om false
    // Utskrift 1 om true
    cout << b << endl;

    int alder;
    cout << "Hur gammal �r du? ";
    cin >> alder;
    b = (alder < 12);

     if (b) {
    // if (alder < 12)
        cout << "Du �r yngre �n 12 �r" << endl;
    }
    else {
        cout << "Du �r �ldre �n 12 �r eller s� �r du 12 �r" << endl;
    }

    // Variabel f�r ett tecken
    char tecken;
    tecken = 'r';
    cout << tecken << endl;
    tecken = tecken + 1;
    cout << tecken << endl; // s
    int teckenToInt;
    teckenToInt = tecken;
    cout << teckenToInt << endl;

    return 0;
}
