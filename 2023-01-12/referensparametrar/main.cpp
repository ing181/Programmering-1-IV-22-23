#include <iostream>
using namespace std;
// En referens referer till något
// Referensparameter
void referensFunktion(int &a, int &b)
{
        a = 99;
        b = 199;
}
int main()
{
    int x = 100;
    int y = 200;
    cout << x << " " << y << endl;
    referensFunktion(x,y);
    cout << x << " " << y << endl;
    return 0;
}
