#include <iostream>
using namespace std;
struct High_jumper
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

    return 0;
}
