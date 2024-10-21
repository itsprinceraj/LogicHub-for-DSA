
// expected output :
// a = 4;
// b = 5;

#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    int b = 4;

    //  swap using swap method;
    // swap(a, b);
    // cout << a << endl
    //      << b << endl;

    // swap using temp variable;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << endl
    //      << b << endl;

    // swap using arithmatic operator
    // a = a - 1;
    // b = b + 1;

    // cout << a << endl
    //      << b << endl;

    // swap using X-OR operator;
    a = a ^ 1;
    b = b ^ 1;

    cout << a << endl
         << b << endl;

    return 0;
}