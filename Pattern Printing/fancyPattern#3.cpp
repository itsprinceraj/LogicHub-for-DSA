#include <iostream>
using namespace std;

/*

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

int main()
{
    int n;
    cout << "Enter an odd number of rows: ";
    cin >> n;
    cout << endl;

    // Outer loop for rows;
    for (int r = 0; r < n; r++)
    {
        //  let's initiate a condition variable which will be used to put ranges in growing and shrinking phase;

        //  hame growing phase shirf r==3 tk print karna hai;  And shrinking phase sirf r==5 tk print karna hai; in this case n=7;
        int cond = r <= (n / 2) ? r : (n - r - 1);

        //  hame har row me star print karna hai. so print star here;
        cout << "* ";

        //  for growing phase;
        // 1 se start karege Q ki hame C0 me sirf 1 chaiye;
        for (int c = 1; c <= cond; c++)
        { // Growing phase r==3 tk hai so range is r;

            cout << c << " ";
        }

        //  for shrinking phase;
        // R2 se hi mujhe  shrink numeric pirnt karna hai, so cond - 1 se initiate kar diya ;
        for (int c = cond - 1; c >= 1; c--)
        {
            cout << c << " ";
        }

        //  agr condition 0 se bara hai to star print kar do;
        if (cond > 0)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
