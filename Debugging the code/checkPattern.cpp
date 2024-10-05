/*
Pattern
1
23
345
4567
*/

#include <iostream>
using namespace std;

int main()
{

    //  to debugg;

    int n;
    int i = 1;
    while (i < n)
    {
        int j = i, count = 1;
        while (count < i)
        {
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    //  debugging done;

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n) // set it to less than equal to, so that number of rows taken as input will be printed ;
    // {
    //     {
    //         int j = i, count = 1;
    //         while (count <= i) // set it to less than equal to;
    //         {
    //             cout << j << " ";
    //             j = j + 1;
    //             count = count + 1;
    //         }
    //         cout << "\n";
    //         i = i + 1;
    //     }

    return 0;
}
