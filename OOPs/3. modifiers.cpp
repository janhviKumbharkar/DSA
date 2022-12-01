#include <iostream>
using namespace std;

class Hero
{
    // properties / Data members 
    public:  
    int health;
    char level;

    void print(){
    cout<<level<<endl;
    }
};

int main()
{
    Hero JK;

    JK.health = 80;
    JK.level = 'a';
    cout << "Health is : " << JK.health << endl;
    cout << "level is : " << JK.level << endl;

    return 0;
}