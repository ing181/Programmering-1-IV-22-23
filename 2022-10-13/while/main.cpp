#include <iostream>

using namespace std;

int main()
{
   // int temp;
   // temp = 0;
    int temp = 0;
   // Utför det som står mellan { }
   // så länge som vilkoretr är sant
   // Logiska operatorer används
   // ! "Gör sant till falskt, falskt till sant
   while (  !(temp < 100) ) {
        cout << temp << endl;
        temp = temp + 1;
    }
   // Tvinga att göra minst en gång
    do {
        cout << temp << endl;
       // temp = temp + 1;
       temp++;
    } while (  !(temp < 100) );

    return 0;
}
