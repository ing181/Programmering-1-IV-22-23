#include <iostream>
#include <fstream>
using namespace std;
// https://en.cppreference.com/w/cpp/io/ios_base
int main()
{

    string namn;
    cout << "Vad heter du? ";
    getline(cin,namn); // Fortsätter tills att \n (nyrad)
    // hittas
    ofstream os;
    os.open("fil.txt",ios_base::app); // app, apppend
    // lägger till en ny rad. Annars skrivs det gamla över
    if (os.is_open()) {  // Kollar att det funkar
    os << namn << "\n"; // Lägger till radbrytning
    os.close();
    }
    else {
        cout << "Error open file" << endl;
    }


    ifstream is;
    string line;
    is.open("fil.txt");
    if (is.is_open()) { // Kollar att det funkar
    while (is.good())
    {
        getline(is,line);
        cout << "TETT" << line << endl;
    }
    is.close();
    }
    else {
        cout << "Error open file" << endl;
    }

    return 0;
}
