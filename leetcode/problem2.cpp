// Number of 1 Bits

#include <iostream>
using namespace std;
int main()
{
    int count = 0, n = 11;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)   //agr n&1 true h to count bdh jayega
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
    return 0;
}