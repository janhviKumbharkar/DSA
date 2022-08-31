#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        maximum = max(maximum, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maximum;
}
int getMin(int arr[], int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return minimum;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    // for taking input in an array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum Number" << getMax(arr, n) << endl;
    cout << "Minimum Number" << getMin(arr, n) << endl;

    return 0;
}
