
#include <cmath>
#include <iostream>
using namespace std;

// decimal to binary by using division method
int toBinary(int num)
{
    int bits;
    int binary = 0;
    int i = 0;

    // create a loop which divide the num untill it gets 0
    for (; num > 0; num = num / 2)
    {
        bits = num % 2; // this will store remainders(bits)

        //  this will create the actuall binary bits
        binary = binary + (bits * pow(10, i++));
    }

    return binary;
}

//  decimal to binary using bitwise method
int bitwiseMethod(int num)
{
    int bits;
    int binary = 0;
    int i = 0;

    for (; num > 0; num = num >> 1)
    {
        bits = (num & 1); // shifting and storing the last bit
        binary = binary + (bits * pow(10, i++));
    }

    return binary;
}

int main()
{

    int num;
    cout << "enter decimal value: ";
    cin >> num;
    // int result = toBinary(num);
    int result = bitwiseMethod(num);
    cout << result << endl;

    return 0;
}