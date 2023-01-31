#include <iostream>

using namespace std;
void test(int arr[]);
int main()
{
    system("chcp 1252");
    int vecktor[]={1,2,3,4,5};
    cout << "V�rdet p� vecktor " << vecktor << endl; // 0x97691ff9b0
    // Namnet "vecktor" har v�rdet 0x97691ff9b0
    // Namnet "vecktor" �r en variabel som kan inneh�lla en adress till en int
    // Adressen till, eller "H�r i minnet finns" variabeln "vecktor"
    cout << "Adressen till vecktor " << &vecktor << endl; //
    test(vecktor);
    return 0;
}

void test(int arr[])
{
    // Namnet "arr" �r en variabel som har samma v�rde
    // som variabeln "vecktor" i main
    // ocks� den �r en variabel av typen "kan inneh�lla adressen till en int"
    cout << "V�rdet p� arr " << arr << endl; // 0x97691ff9b0 Samma som p� rad 9
    // Alts�
    // "arr" och "vecktor" �r OLIKA variabler med samma v�rde
    // Vilket vi kan se:
    // Adressen till "arr"
    cout << "Adressen till arr " << &arr << endl; // Inte samma adress som till "vecktor"
}
// Adresserna som jag skrivit i kommentarerna �r exempel
// De kan bli olika varje g�ng.
// Sammanfattningsvis:
// v�rdet p� variabeln "vecktor" kopieras till
// en ny variabel "arr"
// S� fungerar det n�r man skickar en array till en funktion
