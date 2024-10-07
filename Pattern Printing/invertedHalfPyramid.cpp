#include <iostream>
using namespace std;

/*

* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

int main()
{
    int n;
    cout << "enter number or rows: " << endl;
    cin >> n;

    //  outer loop for n rows
    for (int r = 1; r <= n; r++)
    {

        //  inner loop to print stars in decreasing order ;
        for (int c = 1; c <= (n - r); c++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}