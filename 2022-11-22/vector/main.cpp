#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> heltal;
   //vector<int>::iterator it;
   //it=heltal.begin();
   heltal.push_back(1);
   heltal.push_back(2);
   heltal.push_back(3);
   //it=heltal.begin();
   for (int i=0; i<heltal.size(); i++)
   {
       cout << heltal[i] << endl;
   }
   cout << heltal[0] << endl;
   heltal.insert(heltal.begin(),4);
   cout << "*****" << endl;
      for (int i=0; i<heltal.size(); i++)
   {
       cout << heltal[i] << endl;
   }
   cout << heltal[0] << endl;

    return 0;
}
