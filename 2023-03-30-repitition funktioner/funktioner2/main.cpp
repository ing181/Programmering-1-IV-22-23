#include <iostream>
using namespace std;
//
struct Plus {
    int a;
    int b;
};

// Sidan 99
// Endast ett utv�rde
// utv�rde_typ namn(inv�rde_typ, inv�rde_typ);
// Ge funktionen ett beskrivande namn
// Funktionsprototyp

int plusFunktion(Plus);
void skrivUt(int);
int main()
{
    Plus p;
    p.a=2;
    p.b=3;
    skrivUt(plusFunktion(p));
   // cout << plusFunktion(p) << endl;
    system("chcp 1252");

    return 0;
}
int plusFunktion(Plus p)
{
   int ut = p.a+p.b;

    return ut;
}
void skrivUt(int x)
{
    cout << "Utskrift fr�n \"skrivUt\" " << x << "\n";
}
