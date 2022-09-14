// Subtract the Product and Sum of Digits of an Integer

// ex : 465
// kisi bhi no me se last digit nikalna h to to ( 465 % 10 = 5)
// kisi bhi no me se first two digit nikalna h to to ( 465 / 10 = 46)

#include <iostream>
using namespace std;
int main()
{
    int prod = 1, sum = 0, num = 234;
    while (num != 0)
    {
        int digits = num % 10;
        prod = prod * digits;
        sum = sum + digits;

        num = num / 10;
    }
    int answer = prod - sum;
    cout << answer;
    return 0;
}