#include <iostream>
using namespace std;

/*

    *
   * *
  *   *
 *     *
* * * * *

*/

int main()
{

    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << endl;

    //  outer loop
    for (int r = 0; r < n; r++)
    {

        // for spaces
        for (int s = 0; s < n - r - 1; s++)
        {
            cout << " ";
        }

        //  for stars
        int totalCols = r + 1;
        for (int c = 0; c < totalCols; c++)
        {
            //  these condition will only print stars, in starting and end of the row and column;
            if (r == n - 1 || c == 0 || c == (totalCols - 1))
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}