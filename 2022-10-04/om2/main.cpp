#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tid;
    cout << "Hur mycket �r klockan? ";
    cin >> tid;
    if (tid > 23) {
         cout << "G� och l�gg dig!" << endl;
         cout << "Det �r j�ttesent" << endl;
    }
    else if (tid > 22) {
        cout << "G� och l�gg dig!" << endl;
    }
    else {
        cout << "L�s en bok!" << endl;
    }
    return 0;
}
