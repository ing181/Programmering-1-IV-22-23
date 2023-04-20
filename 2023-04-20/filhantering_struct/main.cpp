#include <iostream>
#include <fstream>
using namespace std;

struct Glosa
{
    string word;
    string translation;
};
int main()
{
    system("chcp 1252");
    Glosa glosa[100];
    int i=0;
    bool fortsatt=true;
    while (fortsatt) {
    cout << "Mata in glosa (" << i << ")>: ";
    cin >> glosa[i].word;
    cout << "Mata in oversattningen (" << i << ")>: ";
    cin >> glosa[i].translation;
    cout << "Avbryt: \"0\""<< endl;
    cout << "Fortsatt: \"1\""<< endl;
    cin >> fortsatt;
    i++;
    }

    ofstream os;
    os.open("fil.txt",ios_base::app); // app, apppend
    // lägger till en ny rad. Annars skrivs det gamla över
    if (os.is_open()) {  // Kollar att det funkar
        for (int j=0; j<i; j++) {
    os << glosa[j].word << "," << glosa[j].translation   << "\n"; // Lägger till radbrytning
        }
    os.close();
    }
    else {
        cout << "Error write to file" << endl;
    }

    // funktioner för string
    string str = "hej,hallo";
    int index=str.find(",");
    //cout << index; // 3
    string g = str.substr(0,3);
    cout << g << endl;
    string t = str.substr(4);
    cout << t << endl;

    return 0;
}
