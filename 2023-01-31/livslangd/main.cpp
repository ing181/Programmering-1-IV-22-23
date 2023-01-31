#include <iostream>

using namespace std;
void test(float &in);
int main()
{
    float var = 3.4;
   // test(3.4); // ingen variabel
               // anges dirkt i koden
    test(var);
    cout << var << endl;
    return 0;
}
void test(float &in)
{
    cout << in << endl;
    in = 99.9;
}
