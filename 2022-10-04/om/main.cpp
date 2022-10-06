#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tid;
    cout << "Hur mycket är klockan? ";
    cin >> tid;
    if (tid > 22) {
        cout << "Gå och lägg dig!" << endl;
        if (tid > 23) {
            cout << "Det är jättesent!" << endl;
        }
    }
    else {
        cout << "Läs en bok!" << endl;
    }
    return 0;
}
