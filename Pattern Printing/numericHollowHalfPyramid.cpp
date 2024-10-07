#include <iostream>
using namespace std;

/*


1
1 2
1   3
1     4
1       5
1         6
1 2 3 4 5 6 7

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
        for (int c = 0; c < r + 1; c++)
        {
            if (r == c || (r == n - 1) || c == 0)
                cout << c + 1 << " ";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}