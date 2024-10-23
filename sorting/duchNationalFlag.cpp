#include <iostream>
using namespace std;

void sortDutch(int arr[], int n)
{
    // 1. Counting frequency approach;

    int zeroCount = 0;
    int onesCount = 0;
    int twosCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeroCount++;
        else if (arr[i] == 1)
            onesCount++;
        else if (arr[i] == 2)
            twosCount++;
    }

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

    // 3. three pointer approach;
}

int main()
{
    int arr[] = {1,
                 0,
                 1,
                 2,
                 0,
                 2,
                 2,
                 0,
                 1,
                 2,
                 0,
                 2};
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
