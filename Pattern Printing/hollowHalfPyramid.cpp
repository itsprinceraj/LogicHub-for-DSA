#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of rows: " << endl;
    cin >> n;

    //  first create halfpyramid;
    for (int r = 0; r < n; r++)
    {
        // int totalColumns = r + 1;
        for (int c = 0; c < r + 1; c++)
        {
            if (r == 0 || r == 1 || r == (n - 1)) // you can also add here a conditon that (r == c) for the diagonal stars , and the below code will be reduced ;
            {
                cout << "* ";
            }
            else if (c == 0 || c == r + 1 - 1) //  (c == r)
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