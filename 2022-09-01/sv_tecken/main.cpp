#include <iostream>
using namespace std;
int main()
{
    // Windows "Command Promt" klarar bara
    // engelska bokstäver.
    // Vi måste tvinga den att byta teckenkodning
    system("chcp 1252");
    // Om du inte vill att bytet ska synas i ditt program lägg till
    system("cls");
    cout << "Hej ÅÄÖ åäö" << endl;
    // "system" betyder att ett Windowsprogram ska köras. Ex: Change Codepage "chcp"
    // eller "cls" Clear Screen
    return 0;
}
