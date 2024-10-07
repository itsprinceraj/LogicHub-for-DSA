#include <iostream>
using namespace std;
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
*/
// this is pascal's triangle pattern;

int main()
{
    int n;
    cout << "Enter an odd number of rows: ";
    cin >> n;
    cout << endl;

    // Outer loop for rows;
    for (int r = 0; r < n; r++)
    {
        int p = 1;
        //  inner loop for column;
        for (int c = 1; c <= r; c++)
        {
            cout << p << " ";
            p = p * (r - c) / (c);
        }

        cout << endl;
    }

    return 0;
}