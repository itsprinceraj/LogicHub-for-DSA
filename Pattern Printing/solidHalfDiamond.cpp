#include <iostream>
using namespace std;

void halfPyramid(int n)
{
    for (int r = 0; r < n; r++)
    {
        // inner loop for stars;
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void InvertedHalfPyramid(int n)
{
    for (int r = 0; r < n; r++)
    {
        // inner loop for stars;
        for (int c = 0; c < n - r - 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << endl;
    halfPyramid(n);
    InvertedHalfPyramid(n);
}