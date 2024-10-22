#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

// main function
int main()
{
    int arr[] = {
        1,
        2,
        4,
        4,
        5,
        5,
        2,
    };
    int size = 7;
    int result = findUnique(arr, size);
    cout << "Unique number: " << result;
    return 0;
}

//  TC: O(N);  -->  Use of only one loop ;
//  SC: O(1;)  -->  Using constant Space;