#include <iostream>

using namespace std;

int main()
{
    cout << "Ange antalet minuter: ";
    int minuter;
    cin >> minuter;
    cout << (minuter / 60)  << " timmar och " << (minuter % 60) << " minuter" << endl;
    return 0;
}
