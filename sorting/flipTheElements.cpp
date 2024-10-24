#include <iostream>
using namespace std;

// input = {0, 1, 1, 0, 1, 0, 0, 1, 0, 1};  ---> flip all elements;
// output = {1, 0, 0, 1, 0, 1, 1, 0, 1, 0};

void flipArray(int arr[], int size)
{
    // 1.  Flip using conditional statement;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         arr[i] = 1;
    //     }
    //     // else if (arr[i] == 1)
    //     // {
    //     //     arr[i] = 0;
    //     // }
    //     else if (arr[i] == 1) // replace 1 with -1;
    //     {
    //         arr[i] = -1;
    //     }
    // }

    // TC: O(N);

    // 2. apply 1s compliment;
    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] = ~arr[i] & 1; // we want only LSB so masking with 1 ,
    // }

    // TC: O(N);

    // 3. put (-1) , where exist 1 into the array;

    for (int i = 0; i < size; i++)
    { //  flip all 0's to 1 and 1's to -1;
        if (arr[i] == 0)
        {
            arr[i] = ~arr[i] & 1;
        }
        else if (arr[i] == 1)
        {                         // ~1 = -2
            arr[i] = ~arr[i] + 1; // -2 +1 = -1;
        }
    }

    //  TC: O(N);
}

// main function
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1, 0, 1};
    int size = 10;
    flipArray(arr, size);

    //  print array;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}