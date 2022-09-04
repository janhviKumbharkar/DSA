#include <iostream>
using namespace std;
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {9, 8, 7, 6, 5};

    reverse(arr, 6);
    reverse(brr, 5);

    PrintArray(arr, 6);
    PrintArray(brr, 5);

    return 0;
}