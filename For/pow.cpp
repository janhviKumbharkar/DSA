#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 2;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
        cout<<ans<<endl;
    }
    cout << ans<<endl;
    return 0;
}