#include <iostream>
using namespace std;
// Ex 11.5, sidan 93 i boken
// Ut�kad med en funktion

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
    cout << "Hur gammal �r hunden? ";
    cin >> myDog.age;

    // Anv�nder funktionen

    cout << "Hunden heter " << myDog.name << ", �r en " << myDog.race << " och �r " << myDog.age << " �r gammal" << endl;

    hund(myDog);

    cout << "Hunden heter " << myDog.name << ", �r en " << myDog.race << " och �r " << myDog.age << " �r gammal" << endl;

    return 0;
}
// &-tecnet medf�r att det �r samma hund i main och i funktionen
// UTAN &-tecknet kopieras hunden till en ny hund som bara lever i funktionen.
void hund(Dog &minHund)
{
 // cout << "Hunden heter " << minHund.name << ", �r en " << minHund.race << " och �r " << minHund.age << " �r gammal";
   minHund.name="SVERKER";
}
