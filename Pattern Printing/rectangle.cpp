#include <iostream>
using namespace std;

/*

* * * * *
* * * * *
* * * * *

*/

int main()
{

    //  outer loop for row;
    for (int r = 0; r < 3; r++)
    {
        //  inner loop for column;
        for (int c = 0; c < 5; c++)
        {
            cout << "* ";
        }

        //  goto next line after printing stars in each row;
        cout << endl;
    }

    return 0;
}