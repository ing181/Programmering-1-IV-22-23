#include <iostream>
using namespace std;
int main()
{
   int arr[7]={1, 2, 3, 4, 5, 6, 7};
   int i=0;
   // Man beh�ver inte veta hur stor arrayen �r
   // f�r att skriva ut alla v�rden
   // om man anv�nder detta s�tt.
   for (int j : arr) {
      // j har samma v�rde som arr[i]
      cout << j << " " << arr[i] << " " << endl;
      i++;
   }

   return 0;
}


