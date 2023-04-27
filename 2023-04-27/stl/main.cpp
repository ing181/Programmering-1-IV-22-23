#include <iostream>
#include <vector>
using namespace std;

struct Par{

    int nr1;
    int nr2;
};

int main()
{
    Par par;
    vector<Par> pv;

    for (int i=0; i<10; i++) {

        par.nr1 = i;
        par.nr2 = i*10;
        pv.push_back(par);

    }


    for (int i=0; i<10; i++) {

       par = pv[i];
       cout << par.nr1 << " och " << par.nr2 << endl;

    }


    return 0;
}
