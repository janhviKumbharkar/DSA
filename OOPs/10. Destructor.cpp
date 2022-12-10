#include <iostream>
using namespace std;
class Hero
{
    public:
    int health;
    char level;
    char name;

    // Destructor
    ~Hero()
    {
        cout << "Destructor called : " << endl;
    }
};
int main()
{
    // static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    delete b; 

    return 0;
}