// sum of digits
// ex: input : 1224     output: 9(sum of all)
#include <iostream>
using namespace std;
int main()
{
    int n = 1224, sum = 0;
    int i = 0;
    while (n != 0)
    {
        int num = n % 10; // 1224 % 10 = 4
        sum = sum + num;  // 0+4 = 4
        n = n / 10;       // 1224 / 10 = 122
        i++;
    }
    cout << sum << endl;

    return 0;
}