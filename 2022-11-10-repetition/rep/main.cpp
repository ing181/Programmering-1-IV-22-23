#include <iostream>
using namespace std;
int main()
{

    system("chcp 1252");
    // kap 3, variabler
    // datatyp namn;
    // int width;
    // int (heltal)
    int tal;
    // float (flyttal, decimaltal)
    // char (Ett tecken, ex: h, ! \n)
    char bokstav;
    float pi;
    // Boolsk variabel
    bool klart;

    // Kap. 13
   // datatyp namn[(antal, ett heltal)];
   int talfalt[10];

   // Kap. 3
   // Tildelning i koden
   int tal2 = 3;
   // inmatning av användaren
   // tangentbordet inmatningsoperatorn variabel
   cin >> tal2;
   // utmatning till skärmen
   cout << tal2;
   // variabel utmatningsoperator skärm

   // kap 4
   // Selection (if och switch)
   // jämförelseoperatorer


   // Räkneoperatorer
   int a = 2;
   int b = 5;



   cout << "\nHeltalet 5 divideras med heltalet 2, (2 \"får plats\" två gånger i fem) =" << (b/a) << endl;
   cout << "\nKvar blir " << (b%a) << "/2" << endl;

   if ( (!(2>3) ) && (true) )  {
    cout << "SANT" << endl;

   }
   else {

        cout << "Hela uttrycet som utvärderades är falskt" << endl;
   }

    return 0;
}
