#include <iostream>
using namespace std;
int function1(int a);
int function2(int b);
int main()
{
    cout << function2(function1(1)) << endl;


    return 0;
}
int function1(int a)
{
    return (a+1);
}
int function2(int b)
{
    return (b+2);
}
