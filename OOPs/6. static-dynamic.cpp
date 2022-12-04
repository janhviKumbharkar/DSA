#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
};
int main()
{
    // static allocation
    Hero JK;
    cout << "health is : " << JK.health << endl;

    // dynamic allocation
    Hero *h = new Hero;
    cout << "health is : " << (*h).health << endl;
    cout << "level is : " << h->health << endl;

    return 0;
}