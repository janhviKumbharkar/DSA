#include <iostream>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    static int timeToComplete;
};
int Hero ::timeToComplete = 5;

int main()
{
    // if data members belongs to class then to access it theres no need to create object
    cout << Hero ::timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;

    cout << b.timeToComplete << endl;

    return 0;
}