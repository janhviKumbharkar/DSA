#include <iostream>
using namespace std;
int main()
{
    int a = 24;
    int b = a + 1;

    if ((a = 25) == b)
    {
        cout << "equal";
    }
    else if (a > 0)
    {
        cout << "positive";
    }
    return 0;
}