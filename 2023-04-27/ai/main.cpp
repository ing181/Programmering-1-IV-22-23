#include <iostream>
using namespace std;
// chatGPT
int main() {
   system("chcp 1252");
  // Inmatning av �rlig skatt, drivmedelspris, f�rbrukning och k�rstr�cka
  double skatt, drivmedel, forbrukning, korstracka;
  cout << "Ange �rlig skatt (kr): ";
  cin >> skatt;
  cout << "Ange drivmedelspris (kr/liter): ";
  cin >> drivmedel;
  cout << "Ange f�rbrukning (liter/mil): ";
  cin >> forbrukning;
  cout << "Ange k�rstr�cka (mil): ";
  cin >> korstracka;

  // Ber�kning av kostnad f�r diesel- respektive bensindrivna bilen
  double kostnad_diesel = skatt + (drivmedel * forbrukning * korstracka);
  double kostnad_bensin = skatt + ((drivmedel + 1.5) * forbrukning * korstracka);

  // J�mf�relse av kostnader och utskrift av resultat
  if (kostnad_diesel < kostnad_bensin) {
    cout << "Det l�nar sig b�st att k�ra en dieselbil." << endl;
  } else {
    cout << "Det l�nar sig b�st att k�ra en bensinbil." << endl;
  }

  return 0;
}
