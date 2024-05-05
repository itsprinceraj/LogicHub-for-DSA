#include <iostream>
using namespace std;

int isPrime(int n)
{ // you can also make it a boolean function;

    // check if n is 1 or 0 , if yes they are not prime so return false;

    if (n == 1 || n == 0)
    {
        return false;
    };

    // iterate a loop from 2 ;

    for (int i = 2; i < n; i++)
    {

        // check if n is divisible by i or not;

        if (n % i == 0)
        { // if divisible then return false;
            return false;
        };
    };

    return true;
}

int main()
{

    // print prime numbers from 1 to 100 ;

    // for (int n = 1; n <= 100; n++) {

    //   if (isPrime(n)) {
    //     cout << n << " ";
    //   };
    // };

    // using while loop ;

    int n = 1;

    while (n <= 100)
    {
        if (isPrime(n))
        {
            cout << n << " ";
        }
        n++;
    }

    return 0;
};