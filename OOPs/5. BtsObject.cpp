#include <iostream>
using namespace std;

class Hero
{
    int health;
    char level;
};
int main()
{
    Hero JK;
    cout << "size of JK : " << sizeof(JK) << endl;

    return 0;
}