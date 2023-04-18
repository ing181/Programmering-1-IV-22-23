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
    os.open("fil.txt",ios_base::app);
    os << namn;
    os.close();



    ifstream is;
    string line;
    is.open("test.txt");
    while (is.good())
    {
        getline(is,line);
        cout << line << endl;
    }
    is.close();


    return 0;
}
