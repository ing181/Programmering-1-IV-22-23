#include <iostream>
using namespace std;
void test(int arr[]);
int main()
{
    int arr[] = {1,2,3};
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    test(arr);
    return 0;
}
void test(int arr[])
{
  cout << "&arr (funktionen) " << &arr << endl;
  cout << "&arr[0] (funktionen) " << &arr << endl;
  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
}
