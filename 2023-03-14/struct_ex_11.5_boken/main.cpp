#include <iostream>
using namespace std;
// Ex 11.5, sidan 93 i boken
// Utökad med en funktion

struct Dog
{
    // Medlemsvariabler
    string name;
    int age;
    string race;

};
void hund(Dog &minHund);

int main()
{
    system("chcp 1252");
    Dog myDog;
    cout << "Vad heter hunden? ";
    cin >> myDog.name;
    cout << "Vilken ras har hunden? ";
    cin >> myDog.race;
    cout << "Hur gammal är hunden? ";
    cin >> myDog.age;

    // Använder funktionen

    cout << "Hunden heter " << myDog.name << ", är en " << myDog.race << " och är " << myDog.age << " år gammal" << endl;

    hund(myDog);

    cout << "Hunden heter " << myDog.name << ", är en " << myDog.race << " och är " << myDog.age << " år gammal" << endl;

    return 0;
}
// &-tecnet medför att det är samma hund i main och i funktionen
// UTAN &-tecknet kopieras hunden till en ny hund som bara lever i funktionen.
void hund(Dog &minHund)
{
 // cout << "Hunden heter " << minHund.name << ", är en " << minHund.race << " och är " << minHund.age << " år gammal";
   minHund.name="SVERKER";
}
