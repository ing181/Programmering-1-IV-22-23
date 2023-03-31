#include <iostream>
using namespace std;
//
struct Plus {
    int a;
    int b;
};



int plusFunktion(Plus[],int);
void skrivUt(int);
int main()
{
    system("chcp 1252");
    Plus p[2];
    p[0].a=2;
    p[0].b=3;
    p[1].a=4;
    p[1].b=5;
    skrivUt(plusFunktion(p,2));
   // cout << plusFunktion(p) << endl;

    system("pause");
    return 0;
}
int plusFunktion(Plus p[],int antal)
{
   int ut=0;
   for (int i=0; i<antal; i++)
   {
       // 5,14
       ut = ut + (p[i].a+p[i].b);
   }


    return ut;
}
void skrivUt(int x)
{
    cout << "Utskrift från \"skrivUt\" " << x << "\n";
}
