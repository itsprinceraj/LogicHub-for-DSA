#include <iostream>
using namespace std;

/*

* * * * * * * * 1 * * * * * * * *
* * * * * * * 2 * 2 * * * * * * *
* * * * * * 3 * 3 * 3 * * * * * *
* * * * * 4 * 4 * 4 * 4 * * * * *
* * * * 5 * 5 * 5 * 5 * 5 * * * *

*/

int main()
{

    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;

    for (int r = 0; r < n; r++)
    {
        // inner loop for part 1 stars only;
        for (int c = n; c < (3 * n - 2 - r); c++)
        {
            cout << "* ";
        }

        // part 2 for full numeric pyramid pattern;
        for (int c = 0; c < (2 * r + 1); c++)
        {
            if (c == 0 || c == 2 * r)
            {
                cout << r + 1 << " ";
            }
            else if (c == 2 || c == 2 * r - 2 || (c == 4 && r == n - 1))
            {
                cout << r + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        //  part 3 for stars again;
        for (int c = n; c < (3 * n - 2 - r); c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
