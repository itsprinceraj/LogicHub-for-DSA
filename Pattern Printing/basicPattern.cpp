#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows: " << endl;
    cin >> n;
    cout << endl;

    //  for each iteration of outer loop, there will be complete iteration of inner loop;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";

        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}