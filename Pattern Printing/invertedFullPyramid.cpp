#include <iostream>
using namespace std;

/*


* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *


*/

int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;

    //  outer loop
    for (int r = 0; r < n; r++)
    {
        //  for printing spaces;
        for (int s = 0; s < r; s++)
        {
            cout << " ";
        }

        //  for printing start;
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}