#include <iostream>
using namespace std;

// write a function for linear search
bool linearSearch(int arr[], int size, int target)
{
    //  check if element at any index of array, matches target element
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == target)
    //     {
    //         cout << "element found :) at index: " << i;
    //         return true;
    //     }
    // }
    // cout << "element not found :(";
    // return false;

    //  now traverse in reverse order;
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == target)
        {
            cout << "element found :) at index: " << i;
            return true;
        }
    }
    cout << "element not found :(";
    return false;
}

//  main function ;

int main()
{
    int size;
    int arr[100];
    int target;
    cout << "Enter Size of the array: " << endl;
    cin >> size;
    cout << "enter elements of array: " << endl;

    // take array as input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    //  take input as target element;
    cout << "enter target element: " << endl;
    cin >> target;

    //  call linear search function ;
    linearSearch(arr, size, target);

    return 0;
}