#include <iostream>

using namespace std;

int main()
{
   // Skriver ut hur stor plats
   // en variabeltyp tar.
   cout << sizeof(bool) << endl;
   // Skapar en variabel
   int tal;
   // tilldelar ett värde
   tal = 78;
   // Samma sak, skapar och tilldelar på samma gång
   int tal1 = 55;
   // Funkar också
   int tal3 = (6 + 9);
   int tal4 = (tal + 1);
   // Använd gärna parenteser
   // Prioritet för +, -, * och /
   // int tal5 = 5+1*2;
   int tal5 = (5+1)*2;
   cout << tal5 << endl;
   int tal6;
   cin >> tal6;
   cout << tal6 << endl;
    return 0;
}
