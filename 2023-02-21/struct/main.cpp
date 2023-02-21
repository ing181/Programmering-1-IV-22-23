#include <iostream>
using namespace std;
struct Test
{
    int value;
};
struct Person
{
    Test test;
    string fnamn;
    string enamn;
    string tfn;
};
void getData(Person &p);
int main()
{
    Person p;
    p.fnamn = "Pia";
    p.enamn = "Persson";
    p.tfn = "070567333";
    p.test.value=99;

    cout << p.fnamn << endl;
    cout << p.enamn << endl;
    cout << p.tfn << endl;
    cout << p.test.value << endl;

    getData(p);



    return 0;
}
void getData(Person &p)
{
    cout << p.fnamn << endl;
    cout << p.enamn << endl;
    cout << p.tfn << endl;
    cout << p.test.value << endl;

}
