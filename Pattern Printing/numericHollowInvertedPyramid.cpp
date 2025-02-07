#include <iostream>
using namespace std;

/*


1 2 3 4 5 6 7
2         7
3       7
4     7
5   7
6 7
7

*/

int main()
{
    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << endl;

    // outer loop
    for (int r = 0; r < n; r++)
    {

        // inner loop
        for (int c = 0; c < n; c++) // initialize c with r+1 to print +1 number in each row;
        {
            if (r == 0)
                cout << c + 1 << " ";
            else if (c == 0)
                cout << r + 1 << " ";
            else if (c == n - r - 1)
            {
                cout << n << " ";
            }
            else
                cout << "  ";
        }

        cout << endl;
    }
    return 0;
}