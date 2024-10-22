// print 1 to n witout using loop
#include <iostream>
using namespace std;

void print1ToN(int n)
{
    if (n <= 0)
        return;

    //  if user entered a positive number the call the function recursively;
    print1ToN(n - 1);
    cout << n << endl;
}

// main function
int main()
{

    int n;
    cout << "enter num: " << endl;
    cin >> n;
    cout << endl;
    print1ToN(n);
    return 0;
}