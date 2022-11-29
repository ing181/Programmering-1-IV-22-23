#include <iostream>
#include <vector>
// Ta bort dubletter
using namespace std;

int main()
{
    system("chcp 1252");
    system("cls");

    vector<string> A;

    string s;
    int antal = 0;
    cout << "Mata in textsträngar, om du vill avsluta mata in 0" << endl;
    do
    {
         cout << "Mata in sträng " << ++antal << endl;
         cin >> s;
        if (s=="0") {

            cout << "Vill du avsluta eller vill du mata in strängen \"0\"?" << endl;
            cout << "Välj 1 för att mata in \"0\"" << endl;
            cout << "Välj 0 för att avsluta" << endl;
            cin >> s;

            if (s!="0") {
                A.push_back(s); // Strängen läggs till i vectorn som ökas med en plats
                continue; // Fortsätter på rad 16
            }

        }

                A.push_back(s); // Strängen läggs till i vectorn som ökas med en plats


    }  while (s!="0");

    vector<string>::iterator it; // Variabel för att navigera i en vector
                                 // Kan innehålla adressen (platsen i minnen)
                                 // till en string vector
    vector<string>::iterator it2;


cout << "Before *********" << endl;

       for (it=A.begin(); it<A.end(); it++) {
        cout << *it << endl;
       }
cout << "****************" << endl;

            // Kollar alla platser i vectorn, gämför med alla platser
            // från nästa plats till siste
            // Om lika, tar bort dubletten

            for (it=A.begin(); it<A.end(); it++) {

                for (it2=it+1; it2<A.end(); it2++) {

                        if (*it2==*it) {
                            A.erase(it2);
                       }
                }
            }

cout << "After *********" << endl;
    for (it=A.begin(); it<A.end(); it++) {
        cout << *it << endl;
       }
cout << "****************" << endl;


    return 0;
}
