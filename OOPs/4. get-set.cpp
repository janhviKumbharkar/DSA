#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    // void sethealth(int h, char name)
    // {
    //     if (name == 'A')
    //     {
    //         health = h;
    //     }
    // }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    Hero JK;
    // setter
    JK.sethealth(100);

    // getter
    cout << "JKs health is : " << JK.gethealth() << endl;

    cout << "JKs level is : " << JK.getlevel() << endl;
    JK.level = 'A';
    cout << "JKs level is : " << JK.getlevel() << endl;

    return 0;
}