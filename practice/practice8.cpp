#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    int b = 3;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * n;
    }
    cout << ans;
    return 0;
}