#include <iostream>
using namespace std;
// Uppgift 2
int main()
{
    // Windows "Command Promt" klarar bara
    // engelska bokstäver.
    // Vi måste tvinga den att byta teckenkodning
    system("chcp 1252");
    // Om du inte vill att bytet ska synas i ditt program lägg till
    system("cls");
    // "system" betyder att ett Windowsprogram ska köras. Ex: Change Codepage "chcp"
    // eller "cls" Clear Screen

    /*
    1. Beskriv med ett exempel hur en heltalsarray
    definieras,
    initieras samt hur
    enstaka arrayvärden nås.
*/
    int heltalsvariabel[3]; // Deklarerar, skapar
    // och kan användas
    heltalsvariabel[0] = 78;
    int heltalsvariabel2[] = {1,2,3};
    cout << heltalsvariabel2[1] << endl;
               // 3 + 78
    int htal = (heltalsvariabel2[2] + heltalsvariabel[0]);
    cout << htal << endl; // 81
    /*
    2. Låt användaren mata in tre decimalvärden i en array.
    Låt programmet beräkna summan och medelvärdet
    av de tre talen och skriva ut dem.
    */
    float decimaltal[3];
    cout << "Mata in tre tal ";
   /* cin >> decimaltal[0];
    cin >> decimaltal[1];
    cin >> decimaltal[2];*/
    cin >> decimaltal[0] >> decimaltal[1] >> decimaltal[2];
    float summa = (decimaltal[0] + decimaltal[1] + decimaltal[2]);
    float medelvarde = (summa/3);
    cout << "Summan av talen är " << summa << endl;
    cout << "Medelvärdet är " << medelvarde << endl;

    /*
    3. Skriv ett program som läser in fyra heltal i en array.
    Därefter ska talen byta plats i arrayen så att
    de står i omvänd ordning. Avsluta programmet
    med en utskrift av arrayen.
    */
    int h[4];
    cin >> h[0] >> h[1] >> h[2] >> h[3];
    cout << h[0] << " " << h[1] << " " << h[2] << " " << h[3] << endl;
    int tmp[] = {h[3],h[2],h[1],h[0]};
    h[0] = tmp[0];
    h[1] = tmp[1];
    h[2] = tmp[2];
    h[3] = tmp[3];

    cout << h[0] << " " << h[1] << " " << h[2] << " " << h[3] << endl;

    return 0;
}
