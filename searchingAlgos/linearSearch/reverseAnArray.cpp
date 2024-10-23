#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int size)
{

    // // using reverse method;
    // reverse(arr, arr + size); // arr represent *address pointer pointing the arr[0] and arr +size pointing the arr[n+1]; 2nd argument is exclusive;
    // cout << "arr +size" << arr;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // using swap method with two pointer approach;
    int start = 0;
    int end = size - 1;
    // //  using swap method;
    // while (start < end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    //  without swap, reverse;
    for (start; start < end; start++)
    {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[end] ^ arr[start];
        end--;
    }

    //  printing array;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// main function
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    //  call reverseArray function;
    reverseArray(arr, size);

    //  iterating from back side;
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}