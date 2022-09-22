// rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

// ex: Input: 1,2,4,42,99     Output : 1 , 2, 88

#include <iostream>
using namespace std;
int main()
{

    while (true)
    {
        int n;
        cin >> n;
        if (n == 42)
        {
            break;
        }
        cout << n << endl;
    }
    return 0;
}