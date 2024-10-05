#include <iostream>
using namespace std;

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