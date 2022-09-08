/*
Skriv ett program som omvandlar inmatade sekunder till timmar, minuter och sekunder.
Använd endast heltalsvariabler.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Ange antalet sekunder: ";
    int sekunder;
    // Användaren matar in antalet sekunder
    cin >> sekunder;
    int timmar;
    // I "timmar" sparas antalet hela timmar
    timmar = sekunder / 3600;
    // i "rest_sekunder" sparas de sekunder som blivit kvar när
    // antalet hela timmar har tagits bort, 3600 sekunder för varje hel timme
    int rest_sekunder;
    rest_sekunder = sekunder % 3600;
    int minuter;
    // I "minuter" sparas antalet hela minuter
    minuter = rest_sekunder / 60;
    // i "rest_sekunder2" sparas de sekunder som blivit kvar när
    // antalet hela minuter har tagits bort, 60 sekunder för varje hel timme
    int rest_sekunder2;
    rest_sekunder2 = rest_sekunder % 60;
    cout << timmar << " timmar, " << minuter << " minuter och " << rest_sekunder2 << " sekunder" << endl;
    return 0;
}
