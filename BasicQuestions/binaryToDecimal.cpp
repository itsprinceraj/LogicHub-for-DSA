#include <iostream>
#include <cmath>
using namespace std;

int toDecimal(int num)
{
    int remainder;
    int decimal = 0;
    int i = 0;

    for (; num; num = num / 10)
    {
        remainder = num % 10; // store remainder
        decimal = decimal + (remainder * (pow(2, i++)));
    }
    return decimal;
}

int main()
{
    int num;
    cout << "enter binary val: " << endl;
    cin >> num;
    int result = toDecimal(num);
    cout << result << endl;
}