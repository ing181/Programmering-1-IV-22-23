#include <iostream>
using namespace std;
void test2()
{
    cout << "Från test2" << endl;
}
void test()
{
    test2();
}

int main()
{   system("chcp 1252");
    test();
    return 0;
}
