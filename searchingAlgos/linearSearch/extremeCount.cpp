//  here two pointer concept will be used;

#include <iostream>
using namespace std;

//  write a function for extreme searching ;
void extreameSearch(int arr[], int size)
{

    //  this works when their exist odd number of elements in array;
    int i = 0;        //  pointer 1;
    int j = size - 1; //     //  pointer 2;

    // for (i; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    //     if (i == j)

    //         break;

    //     for (j; j > 0;)
    //     {
    //         if (j > i)
    //         {
    //             cout << arr[j] << " ";
    //             break;
    //         }
    //     }

    //     j--;
    // }

    //  when number of elements in arrays  are even;

    while (i <= j)
    {

        cout << arr[i] << " ";
        i++;

        if (j > i)
        {
            cout << arr[j] << " ";
            j--;
        }
    }
}

//  main function
int main()
{

    int arr[100];
    int size;

    cout << "enter the size of array: " << endl;
    cin >> size;

    cout << "enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    extreameSearch(arr, size);

    return 0;
}