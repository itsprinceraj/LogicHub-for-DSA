#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "enter number of rows: " << endl;
    cin >> n;

    // outer loop for row
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n - r; c++)
        {

            //  (c == n - r - 1) this is for diagonal in inverted pyramid
            if (r == 0 || r == n - 1 || c == 0 || c == n - r - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
