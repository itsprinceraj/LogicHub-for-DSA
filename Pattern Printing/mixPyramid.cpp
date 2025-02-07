#include <iostream>
using namespace std;

/*


* * * * * * *   * * * * * * *
* * * * * *       * * * * * *
* * * * *           * * * * *
* * * *               * * * *
* * *                   * * *
* *                       * *
*                           *
*                           *
* *                       * *
* * *                   * * *
* * * *               * * * *
* * * * *           * * * * *
* * * * * *       * * * * * *
* * * * * * *   * * * * * * *


*/

//     upper part of the mixed pyramid;
void upperPart(int n)
{
    //  outer loop
    for (int r = 0; r < n; r++)
    {
        // for stars
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }

        //  for full pyramid of spaces
        //  this logic will print odd number of spaces ;
        for (int s = 0; s < (2 * r + 1); s++)
        {
            cout << "  "; // need two spaces ;
        }

        //  repeat printing stars;
        for (int c = 0; c < n - r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//  lower part of the mixed pyramid;
void lowerPart(int n)
{
    //  outer loop
    for (int r = 1; r < n; r++)
    {

        //  print stars
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        //  print spaces
        for (int s = 0; s < (2 * (n - r) - 1); s++)
        {
            cout << "  ";
        }

        //  again print stars
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

//  main function ;
int main()
{

    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;
    upperPart(n);
    lowerPart(n);

    return 0;
}