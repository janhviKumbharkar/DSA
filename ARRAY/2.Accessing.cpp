#include <iostream>
using namespace std;
int main()
{
    int arr[15] = {2, 7, 5};
    int n = 15;

    // accessing an element
    cout << arr[1] << endl;

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}