#include <iostream>

using namespace std;

int main()
{
   // Skriver ut hur stor plats
   // en variabeltyp tar.
   cout << sizeof(bool) << endl;
   // Skapar en variabel
   int tal;
   // tilldelar ett v�rde
   tal = 78;
   // Samma sak, skapar och tilldelar p� samma g�ng
   int tal1 = 55;
   // Funkar ocks�
   int tal3 = (6 + 9);
   int tal4 = (tal + 1);
   // Anv�nd g�rna parenteser
   // Prioritet f�r +, -, * och /
   // int tal5 = 5+1*2;
   int tal5 = (5+1)*2;
   cout << tal5 << endl;
   int tal6;
   cin >> tal6;
   cout << tal6 << endl;
    return 0;
}
