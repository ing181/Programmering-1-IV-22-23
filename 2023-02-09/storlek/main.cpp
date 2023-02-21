#include <iostream>
#include <bitset>
using namespace std;
int numberOfOnes(bitset<32>);
int main()
{
    cout << sizeof(int) << " byte = " << sizeof(int)*8 << " bitar (" << sizeof(int)*8 << " ones or zeros)" << endl;
    cout << endl;

    unsigned int heltal = 0b1111111111111111111111111111111;
    bitset<32>b1(heltal);
    cout << "heltal (decimal) = " << heltal << endl;
    cout << "heltal (binary) = " << b1 << " Nuber of ones = " << numberOfOnes(b1) <<  endl;
    cout << endl;

    cout << "We increase \"heltal\" by one (heltal++)" << endl;
    heltal++;
    cout << "heltal (decimal) = " << heltal << endl;
    bitset<32>b2(heltal);
    cout << "heltal (binary) = " << b2 << " Nuber of ones = " << numberOfOnes(b2) << endl;
    cout << endl;

    cout << "We increase \"heltal\" by one (heltal++)" << endl;
    heltal++;
    cout << "heltal (decimal) = " << heltal << endl;
    bitset<32>b3(heltal);
    cout << "heltal (binary) = " << b3 << " Nuber of ones = " << numberOfOnes(b3) << endl;
    cout << endl;

    cout << "We increase \"heltal\" by one (heltal++)" << endl;
    heltal++;
    cout << "heltal (decimal) = " << heltal << endl;
    bitset<32>b4(heltal);
    cout << "heltal (binary) = " << b4 << " Nuber of ones = " << numberOfOnes(b4) << endl;

    return 0;
}
int numberOfOnes(bitset<32> b)
{
    int antal=0;
    for (int i=0; i<32; i++){
        if (b[i]==1)
        {
            antal++;
        }
    }
    return antal;
}
