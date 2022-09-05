#include <iostream>
using namespace std;
int power()
{
    int a = 12, b = 2;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}
int main()
{

    int ans = power();
    cout << ans;
    return 0;
}