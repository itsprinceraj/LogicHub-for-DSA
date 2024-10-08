/*
Pattern
N = 4
1
22
333
4444
*/
#include <iostream>
using namespace std;

int main()
{
    //  to debug;

    int i, j, n;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    //  debugging done;
    // int i, j, n;
    // cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j < i + 1; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }
}