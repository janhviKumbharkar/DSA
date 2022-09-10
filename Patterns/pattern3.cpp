#include <iostream>
using namespace std;
int main()
{
    int n = 3;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1; // 3-1+1 = 3
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}