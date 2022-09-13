#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    // outer for loop determines rows
    for (int i = 1; i <= n; i++)
    {
        // inner for loop determines columns
        for (int j = i; j <=n ; j++)
        {
            cout << " ";
        }
         for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
         

        cout << endl;
    }

    return 0;
} 