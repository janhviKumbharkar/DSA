#include <iostream>
using namespace std;
int main()
{
    int n = 70;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "not prime";
    }
    else
    {
        cout << "prime";
    }

    return 0;
}