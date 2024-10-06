#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cout << endl;
    int setBitCount = 0;

    // while (n != 0)
    for (n; n != 0;)
    {
        int LSB = (n & 1); // get least significant bit;
        cout << "lsb: " << LSB << endl;
        if (LSB == 1)
            setBitCount += 1;

        n = (n >> 1);
    }
    cout << "setBit count is : " << setBitCount;

    return 0;
}