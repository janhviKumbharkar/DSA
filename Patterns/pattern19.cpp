#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // print spaces first
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print stars then
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
