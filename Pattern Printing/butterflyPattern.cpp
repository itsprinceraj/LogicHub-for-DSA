#include <iostream>
using namespace std;

/*

*                     *
* *                 * *
* * *             * * *
* * * *         * * * *
* * * * *     * * * * *
* * * * * * * * * * * *
* * * * * * * * * * * *
* * * * *     * * * * *
* * * *         * * * *
* * *             * * *
* *                 * *
*                     *

*/

int main()
{
    int n;
    cout << "Enter an odd number of rows: ";
    cin >> n;
    cout << endl;

    //************Upper part***********
    // Outer loop for rows;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        //  for spaces
        for (int c = 0; c <= n - 2 * (r - 1) + 1; c++)
        {
            cout << "  ";
        }

        //  stars again ;
        for (int c = 0; c <= r; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    //******************* lower part **************
    int start = n;
    for (int r = 0; r < n; r++)
    {
        int count = start;
        for (int c = count; c >= 1; c--)
        {
            cout << "* ";
        }
        start = start - 1;

        //  for spaces
        for (int c = 0; c < 2 * r; c++)
        {
            cout << "  ";
        }

        //  stars again ;
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}