#include <iostream>
using namespace std;
// Arrayer som inv�rde till funktion
// Boken sidan ?
void skrivUtArray(int in[], int antal);
void refFunktion(int a);
int main()
{
    system("chcp 1252");
    int arr[] = {1,2,3,4,5};
    for (int i=0; i<5; i++)
    {
        cout << "F�re funktionen: " << arr[i] << endl;
    }
    // Varf�r �ndrar funktionen
    // V�rdena i arrayen arr
    // som finns i main?
    skrivUtArray(arr,5);
    for (int i=0; i<5; i++)
    {
        cout << "Efter funktionen: " << arr[i] << endl;
    }


    //int a = 9;
    //cout << a << endl;
    //refFunktion(a);
    //cout << a << endl;

    return 0;
}
void skrivUtArray(int in[], int antal)
{
    for (int i=0; i<antal; i++)
    {
        in[i] = in[i] + 10;
        //cout << in[i] << " ";
    }
    cout << endl;
}
void refFunktion(int a)
{
    a = 10;

}
