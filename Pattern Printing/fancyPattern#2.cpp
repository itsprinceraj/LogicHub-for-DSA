#include <iostream>
using namespace std;

/*
1
2 * 3
4 * 5 * 6
7 * 8 * 9 * 10
7 * 8 * 9 * 10
4 * 5 * 6
2 * 3
1
*/

// upper part of the pattern;
void fancy2(int n)
{
    int count = 1;

    // outer loop which will print the upper part of the pattern;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 2 * r + 1; c++)
        {
            if (c & 1)
                cout << "* ";
            else
                cout << count++ << " ";
        }

        cout << endl;
    }

    // outer loop which will print the lower part of the pattern;
    for (int r = n - 1; r >= 0; r--) // initialize r form n-1
    {
        int start = ((r * (r + 1)) / 2 + 1); // create a start variable for each row  and for each input of n;

        // inner loop
        for (int c = 0; c < (2 * r + 1); c++)
        {
            if (c & 1)
                cout << "* "; // print * on odd places;
            else
            {
                cout << start++ << " ";
            }
        }

        cout << endl;
    }
}

//  main function ;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;
    fancy2(n);

    return 0;
}