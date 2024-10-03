#include <iostream>
using namespace std;
int main()
{

    //  for each iteration of outer loop, there will be complete iteration of inner loop;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << "-> ";

        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}