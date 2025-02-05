#include <iostream>
using namespace std;

/*

* * * * *
* * * * *
* * * * *

*/

int main()
{
    int n, m;
    cout << "enter no. of rows: " << endl;
    cin >> n;
    cout << "enter no. of column: " << endl;
    cin >> m;
    cout << endl;

    //  outer loop for row;
    for (int r = 0; r < n; r++)
    {
        //  inner loop for column;
        for (int c = 0; c < m; c++)
        {
            cout << "* ";
        }

        //  goto next line after printing stars in each row;
        cout << endl;
    }

    return 0;
}