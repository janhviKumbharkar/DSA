#include <iostream>
using namespace std;
int main()
{
    float f ;
    cout << "enter fahrenheit\n";
    cin >> f;
    float c = 5 * (f - 32) / 9;
    cout << c << endl;

    return 0;
}
