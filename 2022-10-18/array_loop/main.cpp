#include <iostream>

using namespace std;

int main()
{
    int talfalt[5];
    int i = 0;
    while (i < 5) {

        cout << "Mata in tal " << i+1 << ": " << endl;
        cin >> talfalt[i];
        i++;
    }


   // int talfalt[5] = {1,4,-2,6,9};
    i = 0;
    while (i < 5) {

        cout << "Utskrift: " << talfalt[i] << endl;
        // i = i+1;
        i++;
    }
    return 0;
}
