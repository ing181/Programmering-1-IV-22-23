#include <iostream>

using namespace std;

int main()
{
   system("chcp 1252");

   int tal;
   cout << "Mata in ett heltal: ";
   cin >> tal;

   switch (tal) {

   case 0:
       cout << "Noll" << endl;
       break;
   case 1:
       cout << "Ett" << endl;
       break;
   case 2:
       cout << "Två" << endl;
       break;
   case 3:
       cout << "Tre" << endl;
       break;
   case 4:
       cout << "Fyra" << endl;
       break;
   default:
       cout << "Ett annat tal" << endl;

   }
    return 0;
}
