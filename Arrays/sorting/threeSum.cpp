#include <iostream>
using namespace std;

void threeSum(int arr[], int n, int target)
{
    //  unique triplets;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }

    cout << "No triplets found :( ";
}

//  main function ;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;
    threeSum(arr, size, target);
    return 0;
}

// TC: O(N^3);