// sum of elements in an array

#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int sum1 = 0;
    for (int i = 0; i < size; i++)
    {
        sum1 = sum1 + arr[i];
    }
    return sum1;
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    // Taking input of elements in an array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sum is " << sum(arr, n);

    return 0;
}