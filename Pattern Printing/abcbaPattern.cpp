#include <iostream>
using namespace std;

/*
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/

int main()
{
    int n;
    cout << "enter number of rows: ";
    cin >> n;
    cout << endl;

    // outer loop;
    for (int r = 0; r < n; r++)
    {
        char ch = 'A'; // taaki ye har baar 'A' se initialize ho, iss liye isse outer loop ke andr rkha h;
        //  inner loop
        for (int c = 0; c < r + 1; c++)
        {
            cout << ch << " ";
            ch += 1;
        }

        ch--; //  we have to print Characters in reverse order;

        //  now run a loop
        //  you can also use while loop here
        for (ch; ch > 'A';)
        {
            ch--;
            cout << ch << " ";
        }

        cout << endl;
    }
    return 0;
}