// Find Product

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int product = 1, digit;

    for (int i = 0; i < n; i++)
    {
        cin >> digit;
        product = (product * digit) % 1000000007;
    }

    cout << product << endl;

    return 0;
}