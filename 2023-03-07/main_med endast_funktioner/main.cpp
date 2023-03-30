#include <iostream>

using namespace std;

void meny();
void valde_1();
int main()
{
    system("chcp 1252");
    // Här ska bara finnas funktioner
    meny();
    return 0;
}
void meny()
{
    int val;
    do {
    cout << "Välj vad du vill göra" << endl;
    cout << "Välj 0 för att avsluta"<< endl;
    cout << "Välj 1 för att göra..."<< endl;
    cout << "Välj 2 för att göra..."<< endl;
    cout << "Välj 3 för att göra..."<< endl;
    cin >> val;

    switch (val) {
        case 1:
            valde_1();

        default:
            cout << "Felaktigt val!" << endl;
    }

    } while (val != 0);



}


void valde_1()
{
    cout << "Välkommen till 1!" << endl;
}
