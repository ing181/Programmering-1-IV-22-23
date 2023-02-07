#include <iostream>
using namespace std;
void rekursivFunktion(unsigned long long int x);
int main()
{
    long long x=1;
    cout << sizeof(int) << endl;
    cout << sizeof(unsigned long long int) << endl;
    rekursivFunktion(x);


    return 0;
}
void rekursivFunktion(unsigned long long int x)
{

      cout << x << endl;
      rekursivFunktion(x+1);
}
