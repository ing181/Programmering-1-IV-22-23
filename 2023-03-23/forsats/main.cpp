#include <iostream>
using namespace std;
int main()
{
   int arr[7]={1, 2, 3, 4, 5, 6, 7};
   int i=0;
   // Man behöver inte veta hur stor arrayen är
   // för att skriva ut alla värden
   // om man använder detta sätt.
   for (int j : arr) {
      // j har samma värde som arr[i]
      cout << j << " " << arr[i] << " " << endl;
      i++;
   }

   return 0;
}


