#include <iostream>
using namespace std;
int main()
{
    int n = 51;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
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