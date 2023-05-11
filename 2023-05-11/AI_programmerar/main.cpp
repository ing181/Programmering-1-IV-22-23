#include <iostream>
#include <cmath>

using namespace std;

int main() {
    system("chcp 1252");
    double kapital, sparande, procentsats, slutvarde, total_insattningar, total_ranta;
    int tid, val;

    do {
        cout << "\nVälkommen till räntebesparingsprogrammet" << endl;
        cout << "1. Kapitalet när beräkningen börjar" << endl;
        cout << "2. Månadssparande" << endl;
        cout << "3. Procentsats" << endl;
        cout << "4. Tid (år)" << endl;
        cout << "5. Avsluta" << endl;

        cout << "\nVälj en av ovanstående alternativ: ";
        cin >> val;

        switch (val) {
            case 1:
                cout << "Ange kapitalet när beräkningen börjar (kronor): ";
                cin >> kapital;
                break;
            case 2:
                cout << "Ange månadssparande (kronor): ";
                cin >> sparande;
                break;
            case 3:
                cout << "Ange procentsats: ";
                cin >> procentsats;
                break;
            case 4:
                cout << "Ange tid (år): ";
                cin >> tid;
                break;
            case 5:
                break;
            default:
                cout << "Felaktig inmatning. Försök igen." << endl;
                continue;
        }

        if (val == 5) {
            break;
        }

        if (kapital > 0 && sparande > 0 && procentsats > 0 && tid > 0) {
            // Beräkna totala insättningar
            total_insattningar = kapital + (sparande * 12 * tid);

            // Beräkna slutvärdet på kapitalet
            slutvarde = total_insattningar * pow((1 + procentsats / 100), tid);

            // Beräkna totala räntan
            total_ranta = slutvarde - total_insattningar;

            // Skriv ut resultatet
            cout << "\nEfter " << tid << " år har du:" << endl;
            cout << "Insatt totalt: " << total_insattningar << " kronor" << endl;
            cout << "Slutvärde: " << slutvarde << " kronor" << endl;
            cout << "Total ränta: " << total_ranta << " kronor" << endl;
        }
    } while (val != 5);

    return 0;
}
