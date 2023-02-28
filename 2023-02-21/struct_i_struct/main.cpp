#include <iostream>
using namespace std;
struct Ett
{
  int tal1;
  int tal2;
};
// En struct hanteras som en "vanlig" variabel
// Du kan ha en struct i en struct
struct Tva
{
    int tal;
    Ett ett;
};

int main()
{
    Tva tva;
    tva.ett.tal1 = 4;

    return 0;
}
