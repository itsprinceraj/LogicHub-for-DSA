#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int c, r, s;

    // outer loop for rows;
    for (r = 0; r < n; r++)
    {

        //  loop which prints space
        for (s = 0; s < n - r - 1; s++)
        {
            cout << " ";
        }

        //  it prints star in columns ;
        for (c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
