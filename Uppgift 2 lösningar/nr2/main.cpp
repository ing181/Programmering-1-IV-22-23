#include <iostream>

using namespace std;
/*
2. Låt användaren mata in tre decimalvärden i en array. Låt programmet beräkna summan och medelvärdet av de tre talen och skriva ut dem.
*/
int main()
{
    float decimalarray[3];
    cin >> decimalarray[0] << decimalarray[1] << decimalarray[2];
    float summa = decimalarray[0] + decimalarray[1] + decimalarray[2];
    cout << "Summan av talen är " << summa << " medelvärdet är " << (summa/3) << endl;
    return 0;
}
