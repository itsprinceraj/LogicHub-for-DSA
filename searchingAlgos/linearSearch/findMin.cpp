#include <iostream>
#include <limits.h>
using namespace std;

//  create function for finding max num;
int findMax(int arr[], int size)
{

    //  without using min and INT_MAX;
    // int min = arr[0];
    // for (int i = 0; i < size; i++)
    // {
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    // }
    // return min;

    //  using min and INT_MAX
    //

    //  without using max;
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
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
    cout << "min num from array is: " << result << endl;
    return 0;
}