#include <iostream>
using namespace std;
struct Bil
{
    string brand;
    string color;
    float effekt;
};
void minaBilar(Bil bil);
int main()
{
    system("chcp 1252");
    Bil bil;
   // Bil bilar[1000];

   bil.brand = "Volvo";
   bil.color = "Gul";
   bil.effekt = 199;
   cout << "Fr�n main (f�re funktionen)" << endl;
   cout << bil.brand << endl;
   cout << bil.color << endl;
   cout << bil.effekt << " h�stkrafter" << endl << endl;

   minaBilar(bil);

    cout << "Fr�n main (efter funktionen)" << endl;
    cout << bil.brand << endl;
    cout << bil.color << endl;
    cout << bil.effekt << " h�stkrafter" << endl << endl;

   return 0;
}
void minaBilar(Bil bil)
{
    cout << "Fr�n funktionen" << endl << endl;
    cout << bil.brand << endl;
    cout << bil.color << endl;
    cout << bil.effekt << " h�stkrafter" << endl;
    // f�re �ndringen
    bil.brand = "Volvo �r kass";
}
