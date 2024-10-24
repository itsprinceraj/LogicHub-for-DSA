#include <iostream>
using namespace std;

// write printTriplet function ;
void printTriplets(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        //     for (int k = 0; k < n; k++)
        //     {
        //         cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
        //         count++;
        //     }
        // }

        //  print unique triplets;
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                count++;
            }
        }
    }

    cout << "Count or Triplets: " << count << endl;
}

// main function ;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    printTriplets(arr, size);

    return 0;
}

// TC: O(N^3);