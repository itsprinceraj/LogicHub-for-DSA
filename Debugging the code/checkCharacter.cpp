#include <iostream>
using namespace std;

int main()
{ 

    //  to debugg ---------
    char c;
    cin >> c;
    if ('a' <= c || c <= 'z')
    {
        cout << 0;
    }
    else if ('A' <= c || c <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }

    //  debugging done ;

    // char c;
    // cin >> c;
    // if ('a' <= c && c <= 'z')
    // {
    //     cout << 0;
    // }
    // else if ('A' <= c && c <= 'Z')
    // {
    //     cout << 1;
    // }
    // else
    // {
    //     cout << -1;
    // }

    return 0;
}
