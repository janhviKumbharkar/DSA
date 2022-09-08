// decimal to binary

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 7;
    int ans = 0;

    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;   // if n & 1 is true , then n is an odd number  //111 & 001 : 001 (odd)
               // =  odd & 1 --> 1
        // ans = ans *(10^i)+digit
        ans = (bit * pow(10, i)) + ans;  // (1 * 10^0 )+0 = 1;  (1 * 10^1 )+1 = 11;  (1 * 10^2 )+11= 111 ;
        cout<<ans<<endl;
        n = n >> 1;
        i++;
    }
    cout << "answer is " << ans << endl;
    return 0;
} 