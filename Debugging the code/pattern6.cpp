/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include <iostream>
using namespace std;
int main()
{
    // to debug;

    // int no;
    // cin >> no;
    // int i = 1;
    // int n = 2 * no;

    // while (i <= (no))
    // {
    //     int gaps = n - 2 * i + 1, k = 1;
    //     int j = i;
    //     while (k <= gaps / 2)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     int ch = n - gaps + 1, z = (ch + 1) / 2;
    //     while (z > 1)
    //     {
    //         cout << j;
    //         j = j - 1;
    //         z = z + 1;
    //     }
    //     j = j - 1;
    //     z = (ch - 1) / 2;
    //     while (z >= 1)
    //     {
    //         j = j - 1;
    //         cout << j;
    //         z = z - 1;
    //     }
    //     k = 1;
    //     while (k <= gaps / 2)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     cout << "\n";
    //     i = i + 1;
    // }

    //  debugging done;

    int no;
    cin >> no;
    int i = 1;
    int n = 2 * no;

    while (i <= (no))
    {
        //  printing gaps;
        int gaps = n - 2 * i + 1, k = 1;
        int j = i;

        while (k < gaps)
        {
            cout << " ";
            k = k + 1;
        }

        //  printing numbers;
        int ch = n - gaps + 1, z = (ch + 1) / 2;
        while (z > 1)
        {
            cout << j;
            j = j - 1;
            z = z + 1;
        }

        j = j - 1;
        z = (ch - 1) / 2;
        while (z >= 1)
        {
            j = j - 1;
            cout << j;
            z = z - 1;
        }

        k = 1;
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}