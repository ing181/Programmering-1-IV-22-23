#include <iostream>

using namespace std;
/*
2. L�t anv�ndaren mata in tre decimalv�rden i en array. L�t programmet ber�kna summan och medelv�rdet av de tre talen och skriva ut dem.
*/
int main()
{
    float decimalarray[3];
    cin >> decimalarray[0] << decimalarray[1] << decimalarray[2];
    float summa = decimalarray[0] + decimalarray[1] + decimalarray[2];
    cout << "Summan av talen �r " << summa << " medelv�rdet �r " << (summa/3) << endl;
    return 0;
}
