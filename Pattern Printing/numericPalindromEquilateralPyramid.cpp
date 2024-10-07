#include <iostream>
using namespace std;

/*

            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
  1 2 3 4 5 6 5 4 3 2 1
1 2 3 4 5 6 7 6 5 4 3 2 1


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
        // first print spaces
        for (int s = 0; s < (n - r - 1); s++)
        {
            cout << "  ";
        }

        //  print numbers as inverted half pyramid;
        for (int c = 0; c < r + 1; c++)
        {
            cout << c + 1 << " ";
        }

        //  prints number in decreasing order ;
        for (int c = r; c >= 1; c--)
        {
            cout << c << " ";
        }

        cout << endl;
    }
    return 0;
}