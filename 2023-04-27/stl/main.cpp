#include <iostream>
#include <vector>
using namespace std;
struct Par{

    int nr1;
    int nr2;
};
// skickas som referens, s� att det
// h�nder n�got med vektorn i main
bool tabort(vector<Par> &namn);
int main()
{
    Par par;
    // vector<datatyp> namn
    // datatyp kan vara int, float, ...
    // eller egna. Till exempel en struct
    vector<Par> pv;

    char val;

    // H�r kan man hitta p� olika s�tt
    // att hoppa ur while-satsen
    // detta �r ett
    while (true) {
    cout << "Mata in ett nytt talpar:> ";
    cin >> par.nr1 >> par.nr2;
    pv.push_back(par);
    cout << "Vill du forts�tta? (j/n) :> ";
    cin >> val;
      if (val != 'j') {
        break; // hoppar ur
      }
    }

    // size() hur m�nga poster det finns i vektorn
    for (int i=0; i<pv.size(); i++) {

       par = pv[i];
       cout << par.nr1 << " och " << par.nr2 << endl;

    }
    // funktionen tabort anropas (anv�nds)
    if (tabort(pv)) {

               cout << "Du tog bort!" << endl;
               for (int i=0; i<pv.size(); i++) {
               par = pv[i];
               cout << par.nr1 << " och " << par.nr2 << endl;
               }

            } else{
               cout << "Du tog INTE bort!" << endl;
            }



return 0;
}
bool tabort(vector<Par> &namn)
{
    char tabort;
    cout << "Vill du ta bort n�got talpar? (j/n)" << endl;
    cin >> tabort;
    if (tabort != 'j') {
        return false; // Hoppar tiibaka till main
    }
    cout << "V�lj index ";
    for (int i=0; i<namn.size(); i++)
    {
        cout << i << " ";
    }
    int val;
    cin >> val;
    // namn.begin() �r pekare (inneh�ller adressen)
    // till indecx 0 i vektorn
    // Man m�ste anv�nda pekare
    // "Pekararitmetik" finns ett begrepp som heter
    // man kan ange var i vektorn man vill komma
    // om man vet var den b�rjar
    namn.erase(namn.begin()+val); // Tar bort
    return true;

}
