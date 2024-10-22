#include <iostream>
using namespace std;

void printAllPairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    { // fix 1st position for each pair using outer loop;

        //  now iterate over each element fo to print the desired pair;
        for (int j = 0; j < n; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

// main function
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    printAllPairs(arr, size);
    return 0;
}

//  TC: O(N^2);
//  SC: o(1);