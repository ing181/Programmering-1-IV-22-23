#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
   // Kap 5 iterationer, loopar
   // "while" och "do while"
   // medan ( sant ) {
      // g�r detta
   //}

   int i; // V�rdet p� i �r odifinierat
   i = 4;
   while (i<10) {

    cout << "Tar slut s� sm�ningom" << endl;
    i = (i + 2);
   }
    i = 0;
    while (i<10) {
       cout << "Tar slut s� sm�ningom (andra loopen)" << endl;
       cout << "V�lj v�rde p� i: ";
       cin >> i;
   }
    i = 0;
    while (true) {
       cout << "Tar slut s� sm�ningom (tredje loopen)" << endl;
       cout << "V�lj v�rde p� i: ";
       cin >> i;
       if (i >= 10) {
           break;
       }
   }

    while (true) {
       cout << "Tar slut s� sm�ningom (fj�rde loopen)" << endl;
       cout << "V�lj v�rde p� i: ";
       cin >> i;
       if (i >= 10) {
           cout << "Du valde ett tal st�rre �n eller lika med 10" << endl;
           continue;
       }
       cout << "Du valde ett tal mindre �n 10" << endl;
   }


    return 0;
}
