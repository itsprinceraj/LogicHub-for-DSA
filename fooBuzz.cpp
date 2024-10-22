#include <iostream>
using namespace std;

void printFooBuzz()
{

    for (int i = 1; i <= 100; i++)
    {
        //  first condition would be for checking both;
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "Foo Buzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Foo" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}

// main function;
int main()
{
    printFooBuzz();
    return 0;
}