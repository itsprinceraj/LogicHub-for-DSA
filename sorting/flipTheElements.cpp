#include <iostream>
using namespace std;

void flipArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << ~arr[i] << " ";
    }
}

// main function
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1, 0, 1};
    int size = 10;
    flipArray(arr, size);
    return 0;
}