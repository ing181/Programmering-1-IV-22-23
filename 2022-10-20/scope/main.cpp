#include <iostream>
// Undvik globala variabler (variabler som syns i hela programmet)
// Kan vara motiverat i vissa fall
// Till exempel
// float PI = 3.141593;
using namespace std;
int main()
{
    // variabler syns i underliggande
    // måsvingar
    int i = -10;
    // samma "i" finns i underliggande for-sats
        for (i=0; i<10; i++) {

            cout << i << endl;
        }
        // här är en ny variabel "i"
		// existerar endast i for-satsen.
        for (int i=10; i<100; i=i+10) {

            cout << i << endl;
        }
    cout << i << endl;
    return 0;
}
