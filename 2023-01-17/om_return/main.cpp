#include <iostream>
using namespace std;
// Om det reserverade ordet "return"

string test(float in)
{
    cout << "Du skickade ett flyttal (decimaltal)" << endl;
    if (in > 5) {
    //cout << "Större än 5" << endl;
    return "Större än 5";
    }
    return "INTE Större än 5";
}

string test(int in)
{
    cout << "Du skickade ett heltal" << endl;
    if (in > 5) {
    //cout << "Större än 5" << endl;
    return "Större än 5";
    }
    return "INTE Större än 5";
}
int main()
{
    system("chcp 1252");
    int heltal = 4;
    cout << test(heltal) << endl; // "Kallar på", "använder"
    cout << "Återvänder hit 1" << endl;

    float flyt = 4.0;
    cout << test(flyt) << endl; // "Kallar på", "använder"
    cout << "Återvänder hit 2" << endl;
    return 0;
}
