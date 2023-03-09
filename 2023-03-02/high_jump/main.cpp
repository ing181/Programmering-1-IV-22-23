#include <iostream>
using namespace std;
class High_jumper
{
    string namn;
    float height;
};

int main()
{

    cout << "Enter the number of participants: ";
    int participants;
    cin >> participants;
    string s;


    // const int participants = 3;
    // High_jumper hj[participants];
    High_jumper *hj = new High_jumper[participants];

    High_jumper *hj2 = new High_jumper;

    for (int i=0; i<participants; i++)
    {
        cout << "Participant, name: " << (i+1) <<": ";
        cin >> s;
         hj[i].namn = s;
        cout << "Participant, height: " << (i+1) <<": ";
        cin >> hj[i].height;

    }
    float tmp=hj[0].height;
    int index = 0;
     for (int i=1; i<participants; i++)
     {
            if (hj[i].height > tmp)
            {
                tmp = hj[i].height;
                index = i;
            }
     }
     cout << endl;
     cout << hj[index].namn << " jumped the highest, " << hj[index].height << " cm." << endl;

     hj2->height=3.4;
     hj2->namn="Pia";

     cout << hj2->namn << " " << hj2->height  << endl;


    return 0;
}
