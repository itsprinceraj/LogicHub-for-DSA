
// expected output :
// a = 4;
// b = 5;

#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int b = 15;

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
    a = a + b; // 9
    b = a - b; // b = 5;
    a = a - b; // a = 4;

    // cout << a << endl
    //      << b << endl;

    // swap using X-OR operator;
    // a = a ^ b; // 1;
    // b = a ^ b;
    // a = a ^ b;

    cout << a << endl
         << b << endl;

    return 0;
}