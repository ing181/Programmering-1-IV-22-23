/*Betrakta följande bankkontoproblem. Varje årsskifte sätter Mio in 1000 kronor
på sitt bankkonto.
Kontot är från början tomt. Årsräntan är hela tiden 5%. Hur mycket
finns det på kontot inklusive
ränta då det gått 20 år efter den första insättningen och efter
att Mio satt in sitt 21:a belopp?
Lös problemet med en while-loop.
Tips: Varje årsskifte ska behållningen multipliceras med
1.05 (då räntan är 5%) innan den nya insättningen sätts in.
*/
// Global variabel
// Finns i hela programmet
// const konstant, värdet går inte att ändra
//const float RANTA = 1.05;
//const float INSATTNING = 1000;
//const int AR = 20;
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252");
    // Användaren matar in Tid, insättning och ränta
    float ranta;
    float insattning;
    int ar;
    cout << "Beräkna ditt kapital, välj årlig insättning, räntesats och tid" << endl;
    cout << "Årlig insättning: ";
    cin >> insattning;
    cout << "Räntesats: ";
    cin >> ranta;
    cout << "Antal år: ";
    cin >> ar;


    // Skapas och ges värdet 0
    // Viktigt!
    float summa = 0;

    for (int i=0; i<(ar+1); i++) {
        //  Första gången innan summa
        // multipliceras med räntan
        // säkerställer vi att summa = 0
        summa = summa * ranta;
        summa = summa + insattning;
        // Kontroll, tänker jag rätt?
        // cout << summa << endl;
    }
    cout << "Efter " << ar << " år är summan på kontot " << summa << " kronor" << endl;
    return 0;
}
