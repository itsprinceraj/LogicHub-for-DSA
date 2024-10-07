#include <iostream>
using namespace std;

/*


* * * * * * *
 *         *
  *       *
   *     *
    *   *
     * *
      *

*/

int main()
{

    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << endl;

    for (int r = 0; r < n; r++)
    {

        // for spaces
        for (int s = 0; s < r; s++)
        {
            cout << " ";
        }

        //  for stars
        for (int c = 0; c < n - r; c++)
        {
            if (r == 0 || c == 0 || c == n - r - 1)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}