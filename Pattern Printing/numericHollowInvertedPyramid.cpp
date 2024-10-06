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
        for (int c = r + 1; c <= n; c++) // initialize c with r+1 to print +1 number in each row;
        {
            if (r == 0 || c == r + 1 || c == n)
                cout << c << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
    return 0;
}