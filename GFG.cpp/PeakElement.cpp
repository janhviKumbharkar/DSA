// peak element
// Note : Every independent array has a peak element
#include <iostream>
using namespace std;
class Solution
{
public:
    int peakElement(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (
                (mid == 0 || arr[mid] >= arr[mid - 1]) &&
                (mid == n - 1 || arr[mid] >= arr[mid + 1]))
            {
                return mid;
            }
            else if (arr[mid] <= arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return -1;
    }
};