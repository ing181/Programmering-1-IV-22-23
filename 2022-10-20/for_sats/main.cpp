#include <iostream>

using namespace std;

int main()
{
    // for-sats
    // "i++" betyder "i=i+1"

    int heltalsfalt[] = {1,2,3,4,5,6,7};
    for (int i=0; i<7; i++) {
        cout << "Utskrift 1" << endl;
        cout << "Utskrift 2" << endl;
        cout << i << endl;
        cout << heltalsfalt[i] << endl;
    }
    for (int i=0; i<7; i++) {
        cout << "Utskrift 1" << endl;
        cout << "Utskrift 2" << endl;
        cout << i << endl;
        cout << heltalsfalt[i] << endl;
    }

    return 0;
}
