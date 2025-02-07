#include <iostream>
using namespace std;

/*

      *
     * *
    *   *
   *     *
  *       *
 *         *
*           *
*           *
 *         *
  *       *
   *     *
    *   *
     * *
      *

*/

//  hollow full pyramid;
void hollowFullPyramid(int n)
{
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

            //  remove the condition wich prints first row to achieve hollow diamond pattern ---- (r== n-1);
            if (c == 0 || c == r)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}

//  hollow inverted full pyramid
void hollowInvertedPyramid(int n)
{

    for (int r = 1; r < n; r++)
    {

        // for spaces
        for (int s = 0; s < r; s++)
        {
            cout << " ";
        }

        //  for stars
        for (int c = 0; c < n - r; c++)
        {
            //  remove the condition wich prints first row to achieve hollow diamond pattern ---- (r== 0);
            if (c == 0 || c == n - r - 1)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}

//  main function ;
int main()
{
    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << endl;
    hollowFullPyramid(n);
    hollowInvertedPyramid(n);

    return 0;
}