

/*

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 3 4 3 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    //  Upper Part of the Pattern ;

    for (int r = 1; r < n; r++)
    {

        cout << "* ";

        //  now for increasing numbers ;
        for (int c = 1; c < r; c++)
        {
            cout << c << " ";
        }

        for (int c = r - 2; c >= 1; c--)
        {
            cout << c << " ";
        }

        if (r > 1)
            cout << "* ";

        cout << endl;
    }

    //  Lower Part of the Pattern ;
    for (int r = n; r > 1; r--)
    {
        cout << "* ";

        //  print numbers in the column ;
        for (int c = 1; c < r; c++)
        {
            cout << c << " ";
        }

        for (int c = r - 2; c >= 1; c--)
        {
            cout << c << " ";
        }

        if (r > 1)
            cout << "* ";

        cout << endl;
    }
    return 0;
}
