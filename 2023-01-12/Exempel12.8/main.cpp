#include <iostream>
/* Exempel 12.8 sidan 106 */
using namespace std;
// Värdeparameter
// Det skickas ett värde, i detta fall ett heltal, till funktionen
void MyFunction(int y)
{
    cout << "MyFunction 1: " << y << endl; // Utskrift 2
    y = 42;
    cout << "MyFunction 2: " << y << endl; // Utskrift 3
}
int main()
{
    int x = 100;
    cout << "main 1: " << x << endl; // Utskrift 1
    MyFunction(x);
    MyFunction(x);
    MyFunction(x);
    cout << "main 2: " << x << endl; // Utskrift 4

    return 0;
}
