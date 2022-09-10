#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    //   basically outer loop - rows and inner loop - columns
    //   i - rows , j - columns
    // i will hold value '1' then we will enter in column and j will run until '3'
    // ex : i=1    1 2 3
    // due to endl it comes to new line
    // i increments to "1 " to row-2
    // this will follow till i reaches '3'
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        // do not forget to add new line i.e. endl
        cout << endl;
        i = i + 1;
    }

    return 0;
}