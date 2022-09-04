#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1};
    int n = 10;
    cout << "printing th array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // size
    // it will not work when : arr [15] = {2,7} coz it will print size = 15 but we used only two variable
    // this is why we pass size parameter in last function
    
    int arrSize = sizeof(arr) / sizeof(int);      // 10*4 byte / 4 byte = 40 / 4
    cout << "size of arr is " << arrSize << endl; // 10
}