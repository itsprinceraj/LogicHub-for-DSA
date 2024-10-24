#include <iostream>
using namespace std;

void sortDutch(int arr[], int n)
{
    // 1. Counting frequency approach;

    // int zeroCount = 0;
    // int onesCount = 0;
    // int twosCount = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         zeroCount++;
    //     else if (arr[i] == 1)
    //         onesCount++;
    //     else if (arr[i] == 2)
    //         twosCount++;
    // }

    // // cout << zeroCount << endl;
    // // cout << onesCount << endl;
    // // cout << twosCount << endl;

    // //  now fill the areas with 0 ,1 and 2;
    // fill(arr, arr + zeroCount, 0);
    // fill(arr + zeroCount, arr + zeroCount + onesCount, 1);
    // fill(arr + zeroCount + onesCount, arr + zeroCount + onesCount + twosCount, 2);

    // 2. apply loop and put the values ->>> it also uses counting approach;
    // for (int i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }

    // for (int i = zeroCount; i < zeroCount + onesCount; i++)
    // {
    //     arr[i] = 1;
    // }

    // for (int i = zeroCount + onesCount; i < zeroCount + onesCount + twosCount; i++)
    // {
    //     arr[i] = 2;
    // }

    // 3. three pointer approach works for 3 different elements in array;
    // int i = 0;
    // int j = 0;
    // int k = n - 1;
    // for (i; j <= k;)
    // {
    //     if (arr[j] == 0)
    //     {
    //         swap(arr[i], arr[j]);
    //         i++;
    //         j++;
    //     }
    //     else if (arr[j] == 2)
    //     {
    //         swap(arr[j], arr[k]);
    //         k--;
    //     }
    //     else
    //         j++;
    // }

    // 4. Four Pointer approach for 4 different elements in array;

    int i = 0;
    int j = 0; // it will iterate and check then swap;
    int k = n - 1;

    while (j <= k)
    {
        // if (arr[j] == 0)
        // {
        //     swap(arr[i], arr[j]);
        //     i++;
        //     j++;
        // }
        // else if (arr[j] == 2 || arr[j] == 3)
        // {
        //     swap(arr[j], arr[k]);
        //     k--;
        // }
        // else
        // {
        //     j++;
        // }

        //  above approach is not working cause at some point j==k condition occurs and then it fails to sort;
    }
}

int main()
{
    int arr[] = {1, 0, 3, 2, 0, 2, 3, 0, 1, 2, 0, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // call sortDutch function ;
    sortDutch(arr, size);

    //  print aray;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
