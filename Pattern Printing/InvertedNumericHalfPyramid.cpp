#include <iostream>
using namespace std;

/*

1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

int main()
{

    int n;
    cout << "enter number of rows: ";
    cin >> n;

    //  outer loop for rows;
    for (int r = 0; r < n; r++)
    {

        //  inner loop for columns;
        for (int c = 0; c < n - r; c++)
        {
            cout << c + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}