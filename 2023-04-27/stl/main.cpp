#include <iostream>
#include <vector>
using namespace std;
struct Par{

    int nr1;
    int nr2;
};
// skickas som referens, så att det
// händer något med vektorn i main
bool tabort(vector<Par> &namn);
int main()
{
    Par par;
    // vector<datatyp> namn
    // datatyp kan vara int, float, ...
    // eller egna. Till exempel en struct
    vector<Par> pv;

    char val;

    // Här kan man hitta på olika sätt
    // att hoppa ur while-satsen
    // detta är ett
    while (true) {
    cout << "Mata in ett nytt talpar:> ";
    cin >> par.nr1 >> par.nr2;
    pv.push_back(par);
    cout << "Vill du fortsätta? (j/n) :> ";
    cin >> val;
      if (val != 'j') {
        break; // hoppar ur
      }
    }

    // size() hur många poster det finns i vektorn
    for (int i=0; i<pv.size(); i++) {

       par = pv[i];
       cout << par.nr1 << " och " << par.nr2 << endl;

    }
    // funktionen tabort anropas (används)
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
    cout << "Vill du ta bort något talpar? (j/n)" << endl;
    cin >> tabort;
    if (tabort != 'j') {
        return false; // Hoppar tiibaka till main
    }
    cout << "Välj index ";
    for (int i=0; i<namn.size(); i++)
    {
        cout << i << " ";
    }
    int val;
    cin >> val;
    // namn.begin() är pekare (innehåller adressen)
    // till indecx 0 i vektorn
    // Man måste använda pekare
    // "Pekararitmetik" finns ett begrepp som heter
    // man kan ange var i vektorn man vill komma
    // om man vet var den börjar
    namn.erase(namn.begin()+val); // Tar bort
    return true;

}
