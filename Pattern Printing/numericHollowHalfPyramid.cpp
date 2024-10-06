#include <iostream>
using namespace std;

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