#include <iostream>
using namespace std;

// output : find all pairs which sums up to get 35;

//  write twoSum function to print all the posstble pairs which sums up equal to 35 ;
void twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }

    cout << "Pair not found" << endl;
}

//  write a pair function to return a pair which is equal to target;
pair<int, int> twoSum2(int arr[], int n, int target)
{
    pair<int, int> p = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                // cout << arr[i] << "," << arr[j] << endl;
                // return a pair;
                p.first = arr[i];
                p.second = arr[j];
                return p;
            }
        }
    }

    //  if you did not get any pair then, return the default pair;
    return p;
}

//  store that  pair in an array;
void twoSumInArray(int arr[], int n, int target, int array[])
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                array[0] = arr[i];
                array[1] = arr[j];
            }
        }
    }

    cout << "Pair Not Found :( " << endl;
}

// main function ;
main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 35;
    int array[2];
    // twoSum(arr, size, target);
    twoSumInArray(arr, size, target, array);
    cout << array[0] << "," << array[1];

    //  store the returned pair;
    // pair<int, int> ans = twoSum2(arr, size, target);
    // cout << ans.first << "," << ans.second << endl;

    return 0;
}

// TC: O(N^2);