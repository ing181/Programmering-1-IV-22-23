#include <iostream>
using namespace std;
int main()
{
   // system("chcp 1252");

    float manadshyra;
    float timmanad;
    float tim;
    float antaltim;

    cout << "Ange månadshyran ";
    cin >> manadshyra;

    cout << "Ange kostnad per timme vid månadshyra ";
    cin >> timmanad;

    cout << "Ange kostnad per timme utan månadshyra ";
    cin >> tim;

    cout << "Ange antalet timmar du behöver hyra bil ";
    cin >> antaltim;

    float summanad = manadshyra + timmanad * antaltim;
    float sumtim = tim * antaltim;

    cout << endl;

    cout << "Kostnaden vid månadshyra blir " << summanad << endl;
    cout << "Kostnaden vid timmhyra blir " << sumtim << endl;

    if (summanad < sumtim)
    {
        cout << "Det blir billigare med månadshyra" << endl;
    }
    else if (summanad > sumtim)
    {
        cout << "Det blir billigare med månadshyra" << endl;
    }
    else
    {
        cout << "Det blir samma kostnad" << endl;
    }



    return 0;
}
