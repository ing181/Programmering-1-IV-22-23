#include <iostream>
using namespace std;
void start();
int meny();
void addera();
void slut();
int main()
{
    system("chcp 1252");
    system("cls");
    start();
    return 0;

}
void start()
{
    switch(meny())
    {
    case 1:
        addera();
        break;
    default:
        slut();
    }
}
int meny()
{
    cout << "*********************" << endl;
    cout << "Välj vad du vill göra" << endl;
    cout << "*** 1 Addera ********" << endl;
    cout << "*** 2 Subtrahera ****" << endl;
    cout << "*** 3 Avsluta *******" << endl;
    cout << "*********************" << endl;
    int val;
    cin >> val;
    return val;

}
void addera()
{
    double tal;
    double summa=0;
    do {
         cout << "Mata in ett tal ";
         cin >> tal;
         summa = summa + tal;
         //summa+=tal;
         cout << "Summan är " << summa << endl;

    } while (tal != 0);
}
void slut()
{
    cout << "Hej då!" << endl;
}
