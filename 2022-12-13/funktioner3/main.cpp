#include <iostream>
using namespace std;
// Funktionsprototyp
// En kort f�rklaring vad funktionen g�r
// utv�rde, namn och inv�rden
// Funktion som adderar 1 till inv�rdet
// och returnerar summan
int test(int a);

int main()
{
    cout << test(6) << endl;
    return 0;
}

int test(int x)
{
    return (x+1);
}
