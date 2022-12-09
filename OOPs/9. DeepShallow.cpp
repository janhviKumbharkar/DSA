#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
    char *name;

    // default constructor
    Hero()
    {
        cout << "default constructor : " << endl;
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor (deep copy)
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called ";
        this->health = temp.health;
        this->level = temp.level;
    }

    int sethealth(int h)
    {
        health = h;
    }
    char setlevel(char ch)
    {
        level = ch;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "health : " << this->health << endl;
        cout << "level : " << this->level << endl;
    }
};
int main()
{
    Hero hero1;
    hero1.sethealth(90);
    hero1.setlevel('A');
    char name[7] = "janhvi";
    hero1.setname(name);
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'T';
    hero1.print();

    return 0;
}