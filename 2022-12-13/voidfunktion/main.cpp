#include <iostream>
using namespace std;

 void skriv()
 {
     cout << "Skriver" << endl;
 }

void pluss(float a,float b)
 {
     cout << (a+b) << endl;
 }

 float pluss2(float a,float b)
 {
     return (a+b);
 }


int main()
{
    // Använda funktionen
    skriv();
    skriv();
    skriv();
    skriv();
    pluss(6.1,6.1);
    cout << pluss2(1.0,1.0) << endl;
    float f = pluss2(1.0,1.0);
    cout << f << endl;
    pluss(pluss2(1.0,1.0),6.1);


    return 0;
}
