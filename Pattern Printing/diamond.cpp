#include <iostream>
using namespace std;

// full pyramid;
void fullPyramid(int n)
{
    // outer loop for rows;
    for (int r = 0; r < n; r++)
    {
        //  loop which prints space
        for (int s = 0; s < n - r - 1; s++)
        {
            cout << " ";
        }

        //  it prints star in columns ;
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

//  inverted pyramid;
void invertedPyramid(int n)
{
    //  outer loop
    for (int r = 0; r < n; r++)
    {
        //  for printing spaces;
        for (int s = 0; s <= r; s++)
        {
            cout << " ";
        }

        //  for printing start;
        for (int c = 0; c < n - r - 1; c++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

//  print diamong;
void diamond(int n)
{
    fullPyramid(n);
    invertedPyramid(n);
}

int main()
{

    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int c, r, s;
    diamond(n); // print diamong pattern ;
    return 0;
}
