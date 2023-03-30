#include <iostream>
#include <vector> // Tillh�r STL
// En liten introduktion till alla till�gg som finns till c++
// STL (Standard Template Library)
/*
En bra l�nk
https://www.programiz.com/cpp-programming/vectors
*/
using namespace std;
int main()
{
   // create a vector to store int
   vector<int> vec;
   cout << "vector size = " << vec.size() << endl;
   vec.push_back(77);
   cout << "vector size = " << vec.size() << endl;

   cout << vec[0] << endl;
   vec.clear(); // Tar bort alla element i vecktorn
   // raden nedanf�r ger nu ett felmmedelande,
   // vec[0] finns inte l�ngre!
   // cout << vec[0] << endl;
   vec.push_back(88);
   vec.push_back(99);
   cout << "vector size = " << vec.size() << endl;
   // ta bort ett element fr�n vecktorn
   //
   vec.pop_back(); // tar bort sista elementet
   cout << "vector size = " << vec.size() << endl;
   // I st�llet f�r indexering med []
   // kan man skriva .at()
   // ska vara lite snabbare!
   cout << vec.at(0) << endl;
   // Raden under ger ett felmmedelande,
   // finns inte!
   // cout << vec.at(1) << endl;





    return 0;
}
