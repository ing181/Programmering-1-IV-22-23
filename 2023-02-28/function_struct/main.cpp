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
   cout << "Från main (före funktionen)" << endl;
   cout << bil.brand << endl;
   cout << bil.color << endl;
   cout << bil.effekt << " hästkrafter" << endl << endl;

   minaBilar(bil);

    cout << "Från main (efter funktionen)" << endl;
    cout << bil.brand << endl;
    cout << bil.color << endl;
    cout << bil.effekt << " hästkrafter" << endl << endl;

   return 0;
}
void minaBilar(Bil bil)
{
    cout << "Från funktionen" << endl << endl;
    cout << bil.brand << endl;
    cout << bil.color << endl;
    cout << bil.effekt << " hästkrafter" << endl;
    // före ändringen
    bil.brand = "Volvo är kass";
}
