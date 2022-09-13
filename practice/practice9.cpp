#include <iostream>
using namespace std;
int main()
{
    int n=10;
    int a = 0, b=1;
    for(int i=1;i<=n;i++){
        int nextnum = a+b;
        cout<<nextnum<<" ";
     

        a = b;
        b = nextnum;

    }
    return 0;
}
