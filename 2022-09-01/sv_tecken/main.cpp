#include <iostream>
using namespace std;
int main()
{
    // Windows "Command Promt" klarar bara
    // engelska bokst�ver.
    // Vi m�ste tvinga den att byta teckenkodning
    system("chcp 1252");
    // Om du inte vill att bytet ska synas i ditt program l�gg till
    system("cls");
    cout << "Hej ��� ���" << endl;
    // "system" betyder att ett Windowsprogram ska k�ras. Ex: Change Codepage "chcp"
    // eller "cls" Clear Screen
    return 0;
}
