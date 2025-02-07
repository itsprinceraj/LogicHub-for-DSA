#include <iostream>
using namespace std;

/*

*
* *
*   *
*     *
*       *
*         *
* * * * * * *

*/

int main()
{
    int n;
    cout << "enter number of rows: " << endl;
    cin >> n;

    //  first create halfpyramid;
    for (int r = 0; r < n; r++)
    {
        // int totalColumns = r + 1;
        for (int c = 0; c < r + 1; c++)
        {
            if (r == c || r == n - 1 || c == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}