#include <iostream>
#include <vector>
using namespace std;

struct Par {
    int nr1;
    int nr2;
};
bool tabort(vector<Par> &namn);
int main()
{
    system("chcp 1252");
    Par par;
    // vector<datatyp> namn;
    // datatyp kan vara int, float, char...
    // eller egendefinierade (Par)
    vector<Par> pv;
    char val; // Heltalsvariabel, avsedd f�r tecken

    // Olika s�tt att hoppa ur en while-sata
    // H�r �r ett s�tt
    while(true){
        cout << "Mata in ett nytt talpar:> ";
        cin >> par.nr1 >> par.nr2;
        pv.push_back(par);
        cout << "Vill du forts�tta? (j/n) :> ";
        cin >> val;
        if (val != 'j') {
            break;
        }
    }

    for (int i=0; i<pv.size(); i++ ){
        par=pv[i];
        cout << par.nr1 << " och " << par.nr2 << endl;
    }

     if (tabort(pv)){

        cout << "Du tog bort!" << endl;
        for (int i=0; i<pv.size(); i++ ){
        par=pv[i];
        cout << par.nr1 << " och " << par.nr2 << endl;
        }

     } else {
        cout << "Du tog INTE bort!";
        for (int i=0; i<pv.size(); i++ ){
        par=pv[i];
        cout << par.nr1 << " och " << par.nr2 << endl;
        }

     }

    return 0;
}
bool tabort(vector<Par> &namn)
{
    char tabort;
    cout << "Vill du ta bort n�got talpar? (j/n)" << endl;
    cout << ":> ";
    cin >> tabort;
    if (tabort != 'j') {
        return false;
    }
    cout << "V�lj index: ";
    for (int i=0; i<namn.size(); i++){
        cout << i << " ";
    }
        int val;
        cin >> val;
        //
        // namn.erase[val]; FUNKAR INTE!
        namn.erase(namn.begin()+val);
        return true;
}
