#include <iostream>
using namespace std;
struct Person
{
    string fnamn;
    string enamn;
};
int main()
{
    system("chcp 1252");
    Person p[3]; // Skapar 3 st "Person"

    // Loopar igenon p index 0, p index 1 och p index 2
    for (int i=0; i<3; i++){
        cout << "Ange förnamn: ";
        cin >> p[i].fnamn;
        cout << "Ange efternamn: ";
        cin >> p[i].enamn;
    }

    // Skriver ut resultatet
    for (int i=0; i<3; i++){
        cout << p[i].fnamn << endl;
        cout << p[i].enamn << endl;
        cout << endl;
    }
    return 0;
}
