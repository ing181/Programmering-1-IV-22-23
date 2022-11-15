#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
   // Kap 5 iterationer, loopar
   // "while" och "do while"
   // medan ( sant ) {
      // gör detta
   //}

   int i; // Värdet på i är odifinierat
   i = 4;
   while (i<10) {

    cout << "Tar slut så småningom" << endl;
    i = (i + 2);
   }
    i = 0;
    while (i<10) {
       cout << "Tar slut så småningom (andra loopen)" << endl;
       cout << "Välj värde på i: ";
       cin >> i;
   }
    i = 0;
    while (true) {
       cout << "Tar slut så småningom (tredje loopen)" << endl;
       cout << "Välj värde på i: ";
       cin >> i;
       if (i >= 10) {
           break;
       }
   }

    while (true) {
       cout << "Tar slut så småningom (fjärde loopen)" << endl;
       cout << "Välj värde på i: ";
       cin >> i;
       if (i >= 10) {
           cout << "Du valde ett tal större än eller lika med 10" << endl;
           continue;
       }
       cout << "Du valde ett tal mindre än 10" << endl;
   }


    return 0;
}
