#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter no. of rows: ";
    cin >> n;

    // outer loop - for rows;
    for (int r = 0; r < n - 1; r++)
    {

        //  inner loop for r + 1; to achieve half pyramid; you can also write it (c <= r)
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        //  break line ;
        cout << endl;
    }

    return 0;
}