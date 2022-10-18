#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int talfalt[5];
    int i = 0;
    while (i < 5) {

        cout << "Mata in tal " << i+1 << ": " << endl;
        cin >> talfalt[i];
        i++;
    }

    i = 1;
    int tmp;
    tmp = talfalt[0];
    while (i < 5) {

        if (talfalt[i] > tmp){
            tmp = talfalt[i];
        }

        i++;
    }

    cout << "Det största inmatade talet är " << tmp << endl;


    return 0;
}
