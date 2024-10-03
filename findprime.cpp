#include <iostream>
using namespace std;
int isPrime(int num)

{
    if (num == 1 || num == 0)
    {
        return false;
    }

    //  now apply loop to check that the number must not be divisible by 2 to n-1

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i = 1;
    int num;
    cout << "enter num: " << endl;

    cin >> num;

    for (i; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}