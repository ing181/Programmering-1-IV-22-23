#include <iostream>

using namespace std;

int main()
{
    // skapar i, ger i v�rdet 0
    // k�rs EN g�ng

    // I tur och ordning
    // Kollar om sant:i<5
    // Utf�r istruktionerna mellan {}
    // Kollar sant...
    // Utf�r instruktionerna...

    // Om EJ sant avbryta loopen
    //int tal = 0;
    //int annat_tal = 1;
    //int tal=0, annat_tal=1;
    /*
    for (int i=5, j=-5; i!=j ; i--,j++) {

    cout << i << " " << j << endl;
    cout << "Hello world!" << endl;

    }
    */

    for (int i=0; i<10; i++) {

        if (i == 5) {
           // hoppar ur for-satsen
           // break;

           // Om sant (i == 5)
           // avbryts loopen p� rad 37
           // loopen forts�tter med �ndringen i++
           // och kollar om sant i<10
           // om sant, forts�tter loopen
            continue;
        }
        cout << i << endl;
    }

    // j�mf�r med en while-loop
    // du kan beh�va skapa en variabel utanf�r while-loopen
    int j = 0;
    while (j<5) {
        // do stuff
    }
    // variabeln j �r synlig utanf�r while-loopen


    return 0;
}
