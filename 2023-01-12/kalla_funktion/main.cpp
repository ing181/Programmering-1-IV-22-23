#include <iostream>
using namespace std;
void test();
void test2();
int main()
{
    system("chcp 1252");
    test();
    return 0;
}
void test()
{
    test2();
}
void test2()
{
    cout << "Nu skrivs det ut från test2" << endl;
    test();
}
