#include <iostream>
using namespace std;

// void  - when function do not return anything
// function signature
void counting(int n)
{
    // function body
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    int n = 50;
    
    // function call
    counting(n);

    return 0;
}