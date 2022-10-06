#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tal;
    cout << "Mata in ett heltal: ";
    cin >> tal;
    if (tal == 0) {
        cout << "Noll" << endl;
    }
    else if (tal == 1) {
        cout << "Ett" << endl;
    }
    else if (tal == 2) {
        cout << "Två" << endl;
    }
    else if (tal == 3) {
        cout << "Tre" << endl;
    }
    else if (tal == 4) {
        cout << "Fyra" << endl;
    }
    else {
        cout << "Ett annat tal" << endl;
    }
    return 0;
}
