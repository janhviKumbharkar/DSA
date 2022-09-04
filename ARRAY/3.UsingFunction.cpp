#include <iostream>
using namespace std;

//  arr[] - In this function, we provided address of first element in arr[].
// whatever changes we will do here will also impact  actual array in the main
void PrintArray(int arr[], int size)
{
    // printing the array
    cout << "printing th array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // two arrays cannot have same name
    int arr[15] = {2, 4, 5};
    PrintArray(arr, 15);

    int arr1[10] = {0};
    PrintArray(arr1, 10);

    int arr2[10] = {1};
    PrintArray(arr2, 5);

    return 0;
}
