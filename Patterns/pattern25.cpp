#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // numbers from 1 to n-i+1
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j = j + 1;
        }
        // stars (i-1)*2 times
        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "* ";
            j = j + 1;
        }
        // numbers from n-i+1 to 1
        j = n - i + 1;
        while (j >= 1)
        {
            cout << j << " ";
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}
