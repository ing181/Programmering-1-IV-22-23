#include <iostream>

using namespace std;

int main()
{
    // skapar i, ger i värdet 0
    // körs EN gång

    // I tur och ordning
    // Kollar om sant:i<5
    // Utför istruktionerna mellan {}
    // Kollar sant...
    // Utför instruktionerna...

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
           // avbryts loopen på rad 37
           // loopen fortsätter med ändringen i++
           // och kollar om sant i<10
           // om sant, fortsätter loopen
            continue;
        }
        cout << i << endl;
    }

    // jämför med en while-loop
    // du kan behöva skapa en variabel utanför while-loopen
    int j = 0;
    while (j<5) {
        // do stuff
    }
    // variabeln j är synlig utanför while-loopen


    return 0;
}
