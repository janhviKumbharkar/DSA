#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    char op = '%';
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "please enter valid operation";
    }

    return 0;
}