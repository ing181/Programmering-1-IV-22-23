#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
     // iteration och array
     // int arrayen skapas och får samtidigt
     // sina värden
     int falt[] = {1,2,3,4,5};

     // Sök igenom falt, skriv ut värdena


     int intsize = sizeof(int); // Så stor plats tar en int
     int faltsize = sizeof(falt); // Så stor plats tar arrayen
     int antal_platser = faltsize/intsize; // Så många platser finns det i arrayen
     int i = 0;

     while (i<antal_platser) {

        cout << "På plats " << i << " finns värdet " << falt[i] << endl;
        i++; // i=(i+1);
     }


    return 0;
}
