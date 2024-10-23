#include <iostream>
using namespace std;

// apply 2's compliment on the given array;
void twosCompliment(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = ~arr[i] & 1;
            arr[i] += 1;
        }
        else if (arr[i] == 1)
        {
            arr[i] = ~arr[i] & 1;
            arr[i] += 1;
        }
    }
}

//  main function
int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size;

    twosCompliment(arr, size);
    //  print array;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}