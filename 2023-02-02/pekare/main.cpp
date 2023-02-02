#include <iostream>

using namespace std;
void test(int *arr);
int main()
{
    system("chcp 1252");
    int vecktor[]={1,2,3,4,5};
    int *pek = vecktor;
    cout << "Värdet på vecktor (main)" << vecktor << endl; // 0x97691ff9b0
    // Namnet "vecktor" har värdet 0x97691ff9b0
    // Namnet "vecktor" är en variabel som kan innehålla en adress till en int
    // Adressen till, eller "Här i minnet finns" variabeln "vecktor"
    cout << "Adressen till vecktor (main) " << &vecktor << endl; //
    test(vecktor);
    return 0;
}

void test(int *arr)
{
    // Namnet "arr" är en variabel som har samma värde
    // som variabeln "vecktor" i main
    // också den är en variabel av typen "kan innehålla adressen till en int"
    cout << "Värdet på arr (funktionen) " << arr << endl; // 0x97691ff9b0 Samma som på rad 9
    // Altså
    // "arr" och "vecktor" är OLIKA variabler med samma värde
    // Vilket vi kan se:
    // Adressen till "arr"
    cout << "Adressen till arr (funktionen) " << &arr << endl; // Inte samma adress som till "vecktor"

    for (int i=0; i<5; i++){
        cout << (*arr + i) << " "; // Det som finns på adressen arr+0
    }
// Adresserna som jag skrivit i kommentarerna är exempel
// De kan bli olika varje gång.
// Sammanfattningsvis:
// värdet på variabeln "vecktor" kopieras till
// en ny variabel "arr"
// Så fungerar det när man skickar en array till en funktion
}
