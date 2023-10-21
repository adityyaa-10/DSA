#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }
};

int main()
{
    Hero x;

    x.setHealth(99);
    x.level = 'A'; // It is correct in case of public members;
    // x.setLevel('A'); It is also correct

    cout << "Health of x is --> " << x.getHealth() << endl;
    cout << "Level of x is --> " << x.level << endl;
    // cout << "Level of x is --> " << x.getLevel() << endl; --> It is also correct because level is a public member of class hero
}