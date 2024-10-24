#include <iostream>
using namespace std;

// write a fuction to count 0's and 1's in an arrray;
void zeroOneCounter(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        switch (arr[i])
        {
        case 0:
            zeroCount += 1;
            break;

        case 1:
            oneCount += 1;
            break;
        }
    }

    cout << "zero count: " << zeroCount << endl;
    ;
    cout << "one count: " << oneCount << endl;
    ;
}

//  main function
int main()
{

    int arr[100];
    int size;

    cout << "enter the size of array: " << endl;
    cin >> size;

    cout << "enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    zeroOneCounter(arr, size);

    return 0;
}