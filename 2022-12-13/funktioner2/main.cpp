#include <iostream>
using namespace std;

// Överlagrade funktioner
// Funktioner med samma namn
// men skiljer sig åt med
// olika antal eller olika
// datatyper som invärden
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
