#include <iostream>
using namespace std;
// En ritning, "receptet"
struct Person
{
    string fnamn;
    string enamn;
    string tfn;

};
int main()
{
    system("chcp 1252");
    // H�r "bakar vi kakan enligt receptet"
    Person p; // En Person deklareras
    Person p2[3]; // Array med 3 Person
    p.fnamn="Kalle"; // V�rden tilldelas
    p.enamn="Karlsson";
    p.tfn="070123411";
    // "structen punkt ing�ende variabel"


  /*  cout << p.fnamn << " " << p.enamn << " " << p.tfn << endl;
    p.enamn="Svensson";
    cout << p.fnamn << " " << p.enamn << " " << p.tfn << endl;
  */
    for (int i=0; i<3; i++){
        cout << "Mata in f�rnamn p� deltagare " << i+1 << ": ";
        cin >> p2[i].fnamn;
        cout << "Mata in efternamn p� deltagare " << i+1 << ": ";
        cin >> p2[i].enamn;
        cout << "Mata in telefonnummer till deltagare " << i+1 << ": ";
        cin >> p2[i].tfn;
    }

    // H�r vill vi hitta och skriva ut all data
    // p� personer med efternamnet Svensson
    for (int i=0; i<3; i++){
        if (p2[i].enamn=="Svensson")
        {
            cout << p2[i].fnamn  << " " << p2[i].enamn << " " << p2[i].tfn << endl;
        }
    }

    return 0;
}
