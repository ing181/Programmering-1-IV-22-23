#include <iostream>
using namespace std;

// Sidan 99
// Endast ett utv�rde
// utv�rde_typ namn(inv�rde_typ, inv�rde_typ);
// Ge funktionen ett beskrivande namn
// Funktionsprototyp
void skrivUt(int);
int plusFunktion(int a, int &b);
int main()
{
    system("chcp 1252");
    int tal = 3;

    cout << "tal i f�re funktionen " << tal << endl;
    int ut = plusFunktion(4,tal);
    cout << " tal i efter funktionen " << tal << endl;
    cout << "ut " << ut << endl;
    return 0;
}
int plusFunktion(int a, int &b)
{
    b = a*b;
    int ut = (a+b);
    skrivUt(ut);
    return ut;
}
void skrivUt(int ut)
{
    cout << "ut fr�n funktionen \"skrivUt\" " << ut << "\n";
}
