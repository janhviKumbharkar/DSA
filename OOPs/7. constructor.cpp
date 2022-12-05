#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
    Hero()
    {
        cout << "constructor called " << endl;
    }

    // parameterised constructor
    Hero(int health)
    {
        cout << "this-> : " << this << endl;
        this->health = health;
    }
};
int main()
{

    // object created statically
    // cout << "Hi " << endl;
    Hero JK(10);
    cout << "Addresss of JK : " << &JK << endl;

    // cout << "hello " << endl;

    // object created dynamically
    Hero *h = new Hero();

    return 0;
}