#include <iostream>
using namespace std;

int main()
{

    int side;
    cout << "enter length of the side of square: " << endl;
    cin >> side;

    // outer loop for rows
    for (int r = 0; r < side; r++)
    {
        //  inner loop
        for (int c = 0; c < side; c++)
        {
            if (r == 0 || r == (side - 1) || c == 0 || c == (side - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        //  after the end of inner loop , enter a line break;
        cout << endl;
    }

    return 0;
}