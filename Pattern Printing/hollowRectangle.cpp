#include <iostream>
using namespace std;

int main()
{

    // take input from the user for number of rows and column;
    int rows, cols;
    cout << "enter no. of rows: " << endl;
    cin >> rows;
    cout << "enter no. of cols: " << endl;
    cin >> cols;

    //  write outer loop;
    for (int r = 0; r < rows; r++)
    {

        //  for each row print column ;
        for (int c = 0; c < cols; c++)
        {

            //  first and last row
            if (r == 0 || r == (rows - 1))
            {
                cout << "* ";
            }

            //  middle row
            else if (c == 0 || c == (cols - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}