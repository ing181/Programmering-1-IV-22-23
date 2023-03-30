#include <iostream>
using namespace std;

// Sidan 99
// Endast ett utvärde
// utvärde_typ namn(invärde_typ, invärde_typ);
// Ge funktionen ett beskrivande namn
// Funktionsprototyp
void skrivUt(int);
int plusFunktion(int a, int &b);
int main()
{
    system("chcp 1252");
    int tal = 3;

    cout << "tal i före funktionen " << tal << endl;
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
    cout << "ut från funktionen \"skrivUt\" " << ut << "\n";
}
