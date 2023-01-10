#include <iostream>

using namespace std;

int main()
{
    int a;
    int b = 1;
    // a tilldelas 3 om det det som står
    // mellan ( ) är sant, om ej sant
    // tilldelas a 30
    // alla logiska uttryck inom parentesen funkar.
    a = (1 < 2) ? 3 : 30;


    // Om true och false
    // 0 är falskt
    // 1 (eller alla andra heltal) är sant
    cout << true << endl; // print true
    cout << noboolalpha << true << endl; // print 1

    int i = 0; // false

    if (i){
        cout << "Sant" << endl;
    }
    else{
        cout << "Falskt" << endl; // Detta skrivs ut
    }

    i = -23; // true

    if (i){
        cout << "Sant" << endl; // Detta skrivs ut
    }
    else{
        cout << "Falskt" << endl;
    }



    return 0;
}
