#include <iostream>
using namespace std;

/*

1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
5 * 5 * 5 * 5 * 5

*/

int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;

    //  outer loop
    for (int r = 0; r < n; r++)
    {
        //  inner loop  for increasing number of chracters in odd manner like: 1,3,5,7.. etc;
        for (int c = 0; c < (2 * r + 1); c++)
        {
            if (c % 2 == 0)

                cout << r + 1; // on even places this will print the digits;
            else
                cout << " * "; // on odd places this will print stars ;
        }

        cout << endl;
    }

    return 0;
}