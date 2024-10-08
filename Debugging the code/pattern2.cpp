/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include <iostream>
using namespace std;
int main()
{

    //  to debug;
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = i, count = 2 * n + 1, gaps = (n - i - 1), k = 1;
        while (k < gaps)
        {
            cout << " ";
            k = k + 1;
        }
        int m = 1, ch = count - 2 * gaps;
        while (m < ch)
        {
            cout << "*";
            m = m + 1;
        }
        k = 1;
        while (k < gaps)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    //  debugging done;
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     //  printing spaces;
    //     int j = i, count = 2 * n, gaps = (n - i), k = 1;
    //     while (k <= gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }

    //     //  printing stars;
    //     int m = 1, ch = count - 2 * gaps;
    //     while (m < ch)
    //     {
    //         cout << "*";
    //         m = m + 1;
    //     }

    //     //  niche 1 fisool ka loop hai;
    //     k = 1;
    //     while (k < gaps)
    //     {
    //         cout << " ";
    //         k = k + 1;
    //     }
    //     cout << "\n";
    //     i = i + 1;
    // }
}