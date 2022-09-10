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
            char ch = 'A' + j - 1;  // 'A'+1-1= A ,  'A'+2-1= A+1= B , 'A'+3-1= A+2= C
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}