#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
     // iteration och array
     // int arrayen skapas och f�r samtidigt
     // sina v�rden
     int falt[] = {1,2,3,4,5};

     // S�k igenom falt, skriv ut v�rdena


     int intsize = sizeof(int); // S� stor plats tar en int
     int faltsize = sizeof(falt); // S� stor plats tar arrayen
     int antal_platser = faltsize/intsize; // S� m�nga platser finns det i arrayen
     int i = 0;

     while (i<antal_platser) {

        cout << "P� plats " << i << " finns v�rdet " << falt[i] << endl;
        i++; // i=(i+1);
     }


    return 0;
}
