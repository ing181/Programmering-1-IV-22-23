#include <iostream>
using namespace std;
int main()
{
/*
   1. Skriv ett program som beräknar värdet av
   a + b - c. Talen a, b och c
   matas in av användaren under programkörningen
   */
   /*
   //float a;
   //float b;
   //float c;
   // eller
   float a, b, c;

   //cin >> a;
   //cin >> b;
   //cin << c;
   // eller
   cin >> a >> b >> c;
   // Direkt utskrift
   // cout << (a + b - c) << endl;
   float summa = (a + b - c);
   cout << summa << endl;
   */
   /*
   2. Definiera tre variabler, en int, en float och en char.
   Tilldela dem oväntade värden.
   Till exempel int tal = 2.75, float tal2 = 'a', och char tecken = 102
   Låt en "cout" skriva ut värdet på variabeln.
   Fundera på vad som skrivs ut.
   */
   /*
   int heltal;
   float decimaltal;
   char tecken;
   heltal = 2.75;
   decimaltal = 2.75;
   //decimaltal = 'a';
   //tecken = 'a';
  cout << heltal << endl;
  cout << decimaltal << endl;
  heltal = 4;
  decimaltal = 4,789;
  cout << heltal << endl;
  cout << decimaltal << endl;

  // cout << tecken << endl;
  */
  /*
  4. Skriv ett program som läser in en bokstav från alfabetet
     och skriver ut des ASCII vårde (decimalt)
     */
     // char är en heltalsvariable
     // som tolkas enligt ascci tabellen
     /*
     char tecken;
     cin >> tecken;
     cout << tecken << endl;
     int till_heltal = tecken;
     cout << till_heltal << endl;
     */
     /*
     5. Skriv ett program som läser in en bokstav från alfabetet
     och som skriver ut samma bokstav samt de två
     efterföljande bokstäverna i alfabetet.
     Fungerar det med alla bokstäver?
     */
     char tecken;
     cin >> tecken;
     char tecken1 = tecken+1;
     char tecken2 = tecken+2;
     cout << tecken << tecken1 << tecken2 << endl;

    return 0;
}
