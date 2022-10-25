/*Betrakta f�ljande bankkontoproblem. Varje �rsskifte s�tter Mio in 1000 kronor
p� sitt bankkonto.
Kontot �r fr�n b�rjan tomt. �rsr�ntan �r hela tiden 5%. Hur mycket
finns det p� kontot inklusive
r�nta d� det g�tt 20 �r efter den f�rsta ins�ttningen och efter
att Mio satt in sitt 21:a belopp?
L�s problemet med en while-loop.
Tips: Varje �rsskifte ska beh�llningen multipliceras med
1.05 (d� r�ntan �r 5%) innan den nya ins�ttningen s�tts in.
*/
// Global variabel
// Finns i hela programmet
// const konstant, v�rdet g�r inte att �ndra
//const float RANTA = 1.05;
//const float INSATTNING = 1000;
//const int AR = 20;
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252");
    // Anv�ndaren matar in Tid, ins�ttning och r�nta
    float ranta;
    float insattning;
    int ar;
    cout << "Ber�kna ditt kapital, v�lj �rlig ins�ttning, r�ntesats och tid" << endl;
    cout << "�rlig ins�ttning: ";
    cin >> insattning;
    cout << "R�ntesats: ";
    cin >> ranta;
    cout << "Antal �r: ";
    cin >> ar;


    // Skapas och ges v�rdet 0
    // Viktigt!
    float summa = 0;

    for (int i=0; i<(ar+1); i++) {
        //  F�rsta g�ngen innan summa
        // multipliceras med r�ntan
        // s�kerst�ller vi att summa = 0
        summa = summa * ranta;
        summa = summa + insattning;
        // Kontroll, t�nker jag r�tt?
        // cout << summa << endl;
    }
    cout << "Efter " << ar << " �r �r summan p� kontot " << summa << " kronor" << endl;
    return 0;
}
