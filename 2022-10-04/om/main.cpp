#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tid;
    cout << "Hur mycket �r klockan? ";
    cin >> tid;
    if (tid > 22) {
        cout << "G� och l�gg dig!" << endl;
        if (tid > 23) {
            cout << "Det �r j�ttesent!" << endl;
        }
    }
    else {
        cout << "L�s en bok!" << endl;
    }
    return 0;
}
