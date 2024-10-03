#include <iostream>
using namespace std;

// pattern:
//    * * * *
//    * * * *
//    * * * *
//    * * * *

int main()
{

    int side;
    cout << "enter length of the side of square: " << endl;
    cin >> side;
    //  write outer loop first for rows
    for (int r = 0; r < side; r++)
    {
        //  now inner loop for columns
        for (int c = 0; c < side; c++)
        {
            //  this wil print 4 stars in each row;
            cout << "* ";
        }

        //  after every row of stars , there wil be a line break;
        cout << endl;
    }

    return 0;
}