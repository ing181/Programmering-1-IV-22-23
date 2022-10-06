#include <iostream>
using namespace std;
int main()
{

    // >, >=, <, <=
    // ==
    if ( ((true) && (true)) || true ) {
        cout << "true" << endl;
    }

    // Nestlad if-sats
    if ( true ) {

        if (true){
        cout << "true" << endl;
        }

    }



    return 0;
}
