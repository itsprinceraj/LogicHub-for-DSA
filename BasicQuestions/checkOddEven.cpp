#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;

    if (n & 1)

        cout << "odd";
    else
        cout << "even";

    cout << (n & 0) << endl; // if we apply &0 on any  number it gives 0;
    cout << (n | 0) << endl; // if we apply |0 on any nuber it gives n;
    cout << (n ^ 0) << endl; // if we apply ^0 on any nuber it gives n;

    return 0;
}
