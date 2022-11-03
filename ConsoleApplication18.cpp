#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int MultiArr[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    for (int i = 0; i < 4; i++) {
        for (int a = 0; a < 4; a++) {
            cout << MultiArr[i][a];
        }
        cout << endl;
    };

    cout << endl;

    int Arr[4];
        for (int i = 0; i < 4; i++) {
            Arr[i] = MultiArr[0][i];
            MultiArr[0][i] = MultiArr[2][i];
            MultiArr[2][i] = Arr[i];
        }
     for (int i = 0; i < 4; i++) {
         for (int a = 0; a < 4; a++) {
             cout << MultiArr[i][a];
         }
         cout << endl;
     };
    

    return 0;
}
