// Reverse The Number

#include <iostream>
using namespace std;
int main()
{
    int n = 345, reverse = 0;
    // int t;
    // // cin >> t;
    for (int i = 0; i <= n; i++)
    {
        int num = n % 10;             // 5
        reverse = reverse * 10 + num; // 5 * 10 + 4
        n = n / 10;                   // 34
    }
    cout << reverse << endl;

    return 0;
}
