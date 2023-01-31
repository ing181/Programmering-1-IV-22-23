#include <iostream>

using namespace std;
void test(int vecktor[]);
int main()
{
    int arr[] = {1,2,3,4,5};
    cout << &arr << endl;
    arr[1] = 22;
    test(arr);
    for (int i=0; i<5; i++){

       cout << arr[i] << " ";
    }

    return 0;
}
void test(int vecktor[])
{
    cout << &vecktor << endl;
    for (int i=0; i<5; i++){

        vecktor[i] = (vecktor[i] * -1);
    }
}
