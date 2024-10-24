#include <iostream>
using namespace std;

/* ******************* expected outputs; ***************** */
// 1.  printAllPairs();
/*
10,10  20,10  30,10  40,10
10,20  20,20  30,20  40,20
10,30  20,30  30,30  40,30
10,40  20,40  30,40  40,40

*/

// 2. lowerTrianglePairs();
/*
    10,10
    10,20  20,20
    10,30  20,30  30,30
    10,40  20,40  30,40  40,40
 */

// 3. upperTrianglePairs();
/*
20,10   30,10   40,10
        30,20   40,20
                40,30
*/

void printAllPairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    { // fix 1st position for each pair using outer loop;

        //  now iterate over each element fo to print the desired pair;
        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr[i] << "," << arr[j] << endl;
        // }

        //  print unique pairs;
        for (int j = i + 1; j < n; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

//  print lower Triangle Pairs;
void lowerTrianglePairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // **********run the inner loop from j=1 ; j<n;
        for (int j = i; j < n; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

//  print upper triangle pairs;
void upperTriAnglePairs(int arr[], int n)
{
    int i = 1; // started i from 1 so that we got {(20,10) ,30,10 and so on ;}

    while (i < n) // we have to iterate till n in the outer loop;
    {
        for (int j = 0; j < i; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
        i++;
    }
}

// main function
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    printAllPairs(arr, size);
    // lowerTrianglePairs(arr, size);
    // upperTriAnglePairs(arr, size);
    return 0;
}

//  TC: O(N^2);
//  SC: o(1);