#include <iostream>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

//  main function ;
int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;
    int count = 1;

    //  outer loop
    for (int r = 0; r < n; r++)
    {
        //   inner loop
        for (int c = 0; c < r + 1; c++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}