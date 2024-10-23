#include <iostream>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int n)
{

    // 1. counting based approach;

    // int zeroCount = 0;
    // int oneCount = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         zeroCount++;
    //     if (arr[i] == 1)
    //         oneCount++;
    // }

    // // now fill arrray
    // for (int i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }

    // for (int i = zeroCount; i < n; i++)
    // {
    //     arr[i] = 1;
    // }

    // TC = O(N);

    /**************************************** */

    // 2. sort using fill method;
    // fill(arr, arr + 4, 0);
    // fill(arr + 4, arr + n, 1);

    // TC = O(N);

    /************************************************** */

    // 3. using sort method;
    // sort(arr, arr + n);

    // TC = O(NlogN);

    /*******************************************/

    // 4. Two pointer Approach;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
        else
        {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[j] ^ arr[i];
            i++;
            j--;
        }
    }
}

// main function;
int main()
{
    int arr[] = {0,
                 1,
                 0,
                 1,
                 0,
                 0,
                 1};
    int size = 7;
    sortArray(arr, size);

    //  print array;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}