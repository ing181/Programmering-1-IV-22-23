#include <iostream>
using namespace std;
void rekursivFunktion(int x);
int main()
{
    int x=1;
    rekursivFunktion(x);


    return 0;
}
void rekursivFunktion(int x)
{

      cout << x << endl;
      rekursivFunktion(x+1);
}
