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

    for (int r = 1; r <= n; r++)
    {
        // inner loop for part 1 stars only;
        for (int c = 0; c < 2 * (n - 1) - r; c++)
        {
            cout << "* ";
        }

        // part 2 for full numeric pyramid pattern;
        for (int c = 1; c <= r; c++)
        {
            cout << r << " * ";
            
        }

        //  part 3 for stars again; print 1 less star cause you are printing 1 star after printing each number;
        for (int c = 1; c < 2 * (n - 1) - r; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
