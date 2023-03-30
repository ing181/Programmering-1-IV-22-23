#include <iostream>
using namespace std;
//
struct Plus {
    int a;
    int b;
};

// Sidan 99
// Endast ett utvärde
// utvärde_typ namn(invärde_typ, invärde_typ);
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
    cout << "Utskrift från \"skrivUt\" " << x << "\n";
}
