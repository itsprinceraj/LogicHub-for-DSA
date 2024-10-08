/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include <iostream>
using namespace std;

int main()
{
    //  to debug;

    int i, j, n;
    ;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        char p = 'A' - i;
        for (j = 1; j <= i; j++)
        {
            cout << p;
            p++;
        }
        cout << endl;
    }

    //  debugging done;

    // int i, j, n;
    // ;
    // cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     char p = 'F' - i;
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << p;
    //         p++;
    //     }
    //     cout << endl;
    // }
}