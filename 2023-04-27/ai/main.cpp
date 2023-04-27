#include <iostream>
using namespace std;
// chatGPT
int main() {
   system("chcp 1252");
  // Inmatning av årlig skatt, drivmedelspris, förbrukning och körsträcka
  double skatt, drivmedel, forbrukning, korstracka;
  cout << "Ange årlig skatt (kr): ";
  cin >> skatt;
  cout << "Ange drivmedelspris (kr/liter): ";
  cin >> drivmedel;
  cout << "Ange förbrukning (liter/mil): ";
  cin >> forbrukning;
  cout << "Ange körsträcka (mil): ";
  cin >> korstracka;

  // Beräkning av kostnad för diesel- respektive bensindrivna bilen
  double kostnad_diesel = skatt + (drivmedel * forbrukning * korstracka);
  double kostnad_bensin = skatt + ((drivmedel + 1.5) * forbrukning * korstracka);

  // Jämförelse av kostnader och utskrift av resultat
  if (kostnad_diesel < kostnad_bensin) {
    cout << "Det lönar sig bäst att köra en dieselbil." << endl;
  } else {
    cout << "Det lönar sig bäst att köra en bensinbil." << endl;
  }

  return 0;
}
