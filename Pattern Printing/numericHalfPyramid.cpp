#include <iostream>
using namespace std;

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

int main()
{

    int n;
    cout << "enter number of rows: " << endl;
    cin >> n;

    //  outer loop -- for row
    for (int r = 0; r < n; r++)
    {

        //  inner loop for column
        for (int c = 1; c <= r + 1; c++)
        {
            cout << c << " "; // this will print numbers in pyramid
        }

        cout << endl;
    }

    return 0;
}