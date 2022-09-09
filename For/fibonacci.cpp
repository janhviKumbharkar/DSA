// 0 1 1 + 2  = 3  + 5 =  8 ............[ n = (n-1) + (n-2)]
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1;
    for (int i = 1; i <= 10; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";

        a = b;
        b = nextnum;
    }

    return 0;
}