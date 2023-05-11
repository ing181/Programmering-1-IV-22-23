#include <iostream>
#include <cmath>

using namespace std;

int main() {
    system("chcp 1252");
    double kapital, sparande, procentsats, slutvarde, total_insattningar, total_ranta;
    int tid, val;

    do {
        cout << "\nV�lkommen till r�ntebesparingsprogrammet" << endl;
        cout << "1. Kapitalet n�r ber�kningen b�rjar" << endl;
        cout << "2. M�nadssparande" << endl;
        cout << "3. Procentsats" << endl;
        cout << "4. Tid (�r)" << endl;
        cout << "5. Avsluta" << endl;

        cout << "\nV�lj en av ovanst�ende alternativ: ";
        cin >> val;

        switch (val) {
            case 1:
                cout << "Ange kapitalet n�r ber�kningen b�rjar (kronor): ";
                cin >> kapital;
                break;
            case 2:
                cout << "Ange m�nadssparande (kronor): ";
                cin >> sparande;
                break;
            case 3:
                cout << "Ange procentsats: ";
                cin >> procentsats;
                break;
            case 4:
                cout << "Ange tid (�r): ";
                cin >> tid;
                break;
            case 5:
                break;
            default:
                cout << "Felaktig inmatning. F�rs�k igen." << endl;
                continue;
        }

        if (val == 5) {
            break;
        }

        if (kapital > 0 && sparande > 0 && procentsats > 0 && tid > 0) {
            // Ber�kna totala ins�ttningar
            total_insattningar = kapital + (sparande * 12 * tid);

            // Ber�kna slutv�rdet p� kapitalet
            slutvarde = total_insattningar * pow((1 + procentsats / 100), tid);

            // Ber�kna totala r�ntan
            total_ranta = slutvarde - total_insattningar;

            // Skriv ut resultatet
            cout << "\nEfter " << tid << " �r har du:" << endl;
            cout << "Insatt totalt: " << total_insattningar << " kronor" << endl;
            cout << "Slutv�rde: " << slutvarde << " kronor" << endl;
            cout << "Total r�nta: " << total_ranta << " kronor" << endl;
        }
    } while (val != 5);

    return 0;
}
