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
    cout << "Mata in textstr�ngar, om du vill avsluta mata in 0" << endl;
    do
    {
         cout << "Mata in str�ng " << ++antal << endl;
         cin >> s;
        if (s=="0") {

            cout << "Vill du avsluta eller vill du mata in str�ngen \"0\"?" << endl;
            cout << "V�lj 1 f�r att mata in \"0\"" << endl;
            cout << "V�lj 0 f�r att avsluta" << endl;
            cin >> s;

            if (s!="0") {
                A.push_back(s); // Str�ngen l�ggs till i vectorn som �kas med en plats
                continue; // Forts�tter p� rad 16
            }

        }

                A.push_back(s); // Str�ngen l�ggs till i vectorn som �kas med en plats


    }  while (s!="0");

    vector<string>::iterator it; // Variabel f�r att navigera i en vector
                                 // Kan inneh�lla adressen (platsen i minnen)
                                 // till en string vector
    vector<string>::iterator it2;


cout << "Before *********" << endl;

       for (it=A.begin(); it<A.end(); it++) {
        cout << *it << endl;
       }
cout << "****************" << endl;

            // Kollar alla platser i vectorn, g�mf�r med alla platser
            // fr�n n�sta plats till siste
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
