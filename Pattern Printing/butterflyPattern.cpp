#include <iostream>
using namespace std;

/*

*                     *
* *                 * *
* * *             * * *
* * * *         * * * *
* * * * *     * * * * *
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
    cout << "Enter num: ";
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
        for (int c = 0; c < 2 * (n - r - 1); c++)
        {
            cout << "  ";
        }

        //  stars again ;
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    //******************* lower part **************

    for (int r = 1; r < n; r++)
    {

        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }

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