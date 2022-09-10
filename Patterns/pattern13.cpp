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
            char ch = 'A' + i + j - 2; // a+1+2-2=b, a+2+1-2=b
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}