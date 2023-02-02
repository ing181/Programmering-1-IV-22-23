#include <iostream>

using namespace std;
void test(int *arr);
int main()
{
    system("chcp 1252");
    int vecktor[]={1,2,3,4,5};
    int *pek = vecktor;
    cout << "V�rdet p� vecktor (main)" << vecktor << endl; // 0x97691ff9b0
    // Namnet "vecktor" har v�rdet 0x97691ff9b0
    // Namnet "vecktor" �r en variabel som kan inneh�lla en adress till en int
    // Adressen till, eller "H�r i minnet finns" variabeln "vecktor"
    cout << "Adressen till vecktor (main) " << &vecktor << endl; //
    test(vecktor);
    return 0;
}

void test(int *arr)
{
    // Namnet "arr" �r en variabel som har samma v�rde
    // som variabeln "vecktor" i main
    // ocks� den �r en variabel av typen "kan inneh�lla adressen till en int"
    cout << "V�rdet p� arr (funktionen) " << arr << endl; // 0x97691ff9b0 Samma som p� rad 9
    // Alts�
    // "arr" och "vecktor" �r OLIKA variabler med samma v�rde
    // Vilket vi kan se:
    // Adressen till "arr"
    cout << "Adressen till arr (funktionen) " << &arr << endl; // Inte samma adress som till "vecktor"

    for (int i=0; i<5; i++){
        cout << (*arr + i) << " "; // Det som finns p� adressen arr+0
    }
// Adresserna som jag skrivit i kommentarerna �r exempel
// De kan bli olika varje g�ng.
// Sammanfattningsvis:
// v�rdet p� variabeln "vecktor" kopieras till
// en ny variabel "arr"
// S� fungerar det n�r man skickar en array till en funktion
}
