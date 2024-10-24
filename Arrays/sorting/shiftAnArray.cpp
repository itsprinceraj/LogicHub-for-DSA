#include <iostream>
using namespace std;

//  function to shift the array;
void shiftArray(int arr[], int size, int n, int temp[])
{
    //   here n is the number of places we have to shift;
    n = n % size;

    //  step 1: copy and save the lost element;
    int index = 0;
    for (int i = size - n; i < size; i++)
    {
        temp[index] = arr[i]; // it copies the last n element from the array to prevent loss ;
        index++;
    }

    // step 2: shift the elements;
    for (int i = size - 1; i >= n; i--)
    {
        arr[i] = arr[i - n];
    }

    //  step 3: Paste the temp array elements into the original array;
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

//  main function ;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 10;
    int temp[10000];

    // before shift;
    cout << "Before shift: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    shiftArray(arr, size, shift, temp);

    //  after shift
    cout << "After shift: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// TC: O(N);