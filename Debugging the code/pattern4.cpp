/*
Pattern
N = 4
1
21
321
4321
*/
#include <iostream>
using namespace std;

int main()
{
    //  to debug;

    int i, j, n;
    cin >> n;
    for (i = 1; i < n; i--)
    {
        int p;
        for (j = 1; j < n; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }

    //  debugging done;
    // int i, j, n;
    // cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     int p = i;
    //     for (j = 1; j < i + 1; j++)
    //     {
    //         cout << p;
    //         p--;
    //     }

    //     cout << endl;
    // }
}