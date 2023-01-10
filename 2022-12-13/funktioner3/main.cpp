#include <iostream>
using namespace std;
// Funktionsprototyp
// En kort förklaring vad funktionen gör
// utvärde, namn och invärden
// Funktion som adderar 1 till invärdet
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
