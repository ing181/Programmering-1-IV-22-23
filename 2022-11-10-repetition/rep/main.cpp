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
   // inmatning av anv�ndaren
   // tangentbordet inmatningsoperatorn variabel
   cin >> tal2;
   // utmatning till sk�rmen
   cout << tal2;
   // variabel utmatningsoperator sk�rm

   // kap 4
   // Selection (if och switch)
   // j�mf�relseoperatorer


   // R�kneoperatorer
   int a = 2;
   int b = 5;



   cout << "\nHeltalet 5 divideras med heltalet 2, (2 \"f�r plats\" tv� g�nger i fem) =" << (b/a) << endl;
   cout << "\nKvar blir " << (b%a) << "/2" << endl;

   if ( (!(2>3) ) && (true) )  {
    cout << "SANT" << endl;

   }
   else {

        cout << "Hela uttrycet som utv�rderades �r falskt" << endl;
   }

    return 0;
}
