#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   // fstream Input/output stream class to operate on files.
   // "os.out | os.app" betyder "Skriv till filen" och "append (lägg till i slutet)"
   fstream os("fil.txt", os.out | os.app);
   for (int i=0; i<5; i++) {
        os << "Hejsan" << endl;
    }
    os.close();

  // Läser in till variable
/*
https://stackoverflow.com/questions/55479131/easiest-way-to-load-variables-from-a-text-file
*/

   ifstream infile("fil.txt");
   string line, ut;
   while (getline(infile, line)) {
            ut = ut + line +"\n";
   }

  cout << ut;

    return 0;
}
