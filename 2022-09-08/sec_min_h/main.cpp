/*
Skriv ett program som omvandlar inmatade sekunder till timmar, minuter och sekunder.
Anv�nd endast heltalsvariabler.
*/
#include <iostream>
using namespace std;
int main()
{
    // int min_alder; // snake case
    // int minAlder; // Camel case
    // cout << minAlder << " " << mina_lder << endl;
    // Variabel som inte gets n�got v�rde inneh�ller ett godtyckligt v�rde

    cout << "Ange antalet sekunder: ";
    int sekunder;
    cin >> sekunder;
	int timmar;
	timmar = sekunder / 3600;
	int rest_sekunder = sekunder % 3600;
	int minuter;
	minuter = rest_sekunder / 60;
	sekunder = rest_sekunder % 60;
    cout << sekunder  << " sekunder, " << minuter << " minuter och " << timmar << " timmar " << endl;

    return 0;
}
