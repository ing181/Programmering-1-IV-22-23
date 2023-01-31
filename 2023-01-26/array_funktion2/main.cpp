#include <iostream>
using namespace std;
// https://github.com/ing181/Programmering-1-IV-22-23/tree/main/2023-01-26/array_funktion
// Arrayer som invärde till funktion
// Boken sidan ?
void skrivUtArray(int in[], int antal);
void refFunktion(int a);
int main()
{
    system("chcp 1252");
    int arr[] = {1,2,3,4,5};
    skrivUtArray(arr,5);

    return 0;
}
void skrivUtArray(int in[], int antal)
{
    cout << in << endl; // Adressen till första platsen
    cout << *in << endl; // Innehållet på första platsen
    cout << in + 1 << endl; // Adressen till andra platsen
    cout << *in + 1 << endl; // Innehållet på andra platsen

    for (int i=0; i<antal; i++)
    {
        cout << in[i] << " ";
    }
    cout << endl;
}
void refFunktion(int a)
{
    a = 10;

}
