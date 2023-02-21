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
    // Här "bakar vi kakan enligt receptet"
    Person p; // En Person deklareras
    Person p2[3]; // Array med 3 Person
    p.fnamn="Kalle"; // Värden tilldelas
    p.enamn="Karlsson";
    p.tfn="070123411";
    // "structen punkt ingående variabel"


  /*  cout << p.fnamn << " " << p.enamn << " " << p.tfn << endl;
    p.enamn="Svensson";
    cout << p.fnamn << " " << p.enamn << " " << p.tfn << endl;
  */
    for (int i=0; i<3; i++){
        cout << "Mata in förnamn på deltagare " << i+1 << ": ";
        cin >> p2[i].fnamn;
        cout << "Mata in efternamn på deltagare " << i+1 << ": ";
        cin >> p2[i].enamn;
        cout << "Mata in telefonnummer till deltagare " << i+1 << ": ";
        cin >> p2[i].tfn;
    }

    // Här vill vi hitta och skriva ut all data
    // på personer med efternamnet Svensson
    for (int i=0; i<3; i++){
        if (p2[i].enamn=="Svensson")
        {
            cout << p2[i].fnamn  << " " << p2[i].enamn << " " << p2[i].tfn << endl;
        }
    }

    return 0;
}
