#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    // default constructor
    Hero()
    {
        cout << "default constructor : " << endl;
    }

    // parameterised constructor
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // user created copy constructor
    Hero(Hero &temp)
    {
        cout << "copy constructor called ";
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health" << this->health << endl;
        cout << "level" << this->level << endl;
    }
};
int main()
{
    Hero J(70, 'A');
    J.print();

    // copy constructor
    Hero K(J);
    K.print();

    return 0;
}