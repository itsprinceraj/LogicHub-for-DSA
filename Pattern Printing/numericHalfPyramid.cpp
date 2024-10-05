#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter number of rows: " << endl;
    cin >> n;

    //  outer loop -- for row
    for (int r = 0; r < n; r++)
    {

        //  inner loop for column 
        for (int c = 0; c < r + 1; c++)
        {
            cout << (c + 1) << " "; // this will print numbers in pyramid
        }

        cout << endl;
    }

    return 0;
}