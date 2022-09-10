#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i - j + 1 << " ";
            // 1-1+1 = 1 , in second loop( 2-1+1 = 2 , 2-2+1 = 1 )
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
