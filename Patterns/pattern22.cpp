#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // for spaces
        int j = 1, space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space = space + 1;
        }
        // for *
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}
