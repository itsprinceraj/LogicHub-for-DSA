#include <iostream>
#include <limits.h>
using namespace std;

//  create function for finding max num;
int findMax(int arr[], int size)
{

    //  without using max and INT_MIN;
    // int max = arr[0];
    // for (int i = 0; i < size; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // return max;

    //  using max and INT_MIN
    //

    //  without using max;
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
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

    //  call findMax function;
    int result = findMax(arr, size);
    cout << "max num from array is: " << result << endl;
    return 0;
}