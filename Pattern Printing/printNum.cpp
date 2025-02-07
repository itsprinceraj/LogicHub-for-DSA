/*   for n = 3;
    3 3 3 2 2 2 1 1 1
    3 3 2 2 1 1
    3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no. of rows: " << endl;
    cin >> n;
    cout << endl;

    for (int r = 0; r < n; r++)
    {
        for (int c = n; c > 0; c--)
        {
            for (int k = 0; k < n - r; k++)
            {
                cout << c << " ";
            }
        }
        cout << endl;
    }

    return 0;
}