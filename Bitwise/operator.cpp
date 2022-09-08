#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    // AND , OR , NOT , XOR
    cout << " a&b " << (a & b) << endl;  // 100 && 110 : 4(100)
    cout << " a|b " << (a | b) << endl;  //100 | 110  :  6(110)
    cout << " ~a " << (~a) << endl;      // ~100  :  101 (2s complement) : -5 
    cout << " a^b " << (a ^ b) << endl;  //100 ^ 110  :  2(010)

    // left shift , right shift
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // increment - decrement
    int i = 7;
    cout << (++i) << endl; // 8
    cout << (i++) << endl; // 8 , execute hone k baad i = 9
    cout << (i--) << endl; // 9 , decrement krne k baad  i = 8
    cout << (--i) << endl; // 7 , i = 7
    return 0;
}