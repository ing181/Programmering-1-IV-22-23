#include <iostream>
using namespace std;

// �verlagrade funktioner
// Funktioner med samma namn
// men skiljer sig �t med
// olika antal eller olika
// datatyper som inv�rden
// funkar
int hantera(int a, int b){

    return (a+b);
}

int hantera(int a, int b, int c){

    return (a+b+c);

}
/*
float hantera(float a, float b){

    return (a-b);

}
*/
int main()
{
    cout << hantera(1,1,1) << endl;
    cout << hantera(1,1) << endl;
    //cout << hantera(5.1,5.0) << endl; // Kolla upp
    return 0;
}
