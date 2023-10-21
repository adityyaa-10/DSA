#include <iostream>
using namespace std;

class Hero
{
public:     // Setting the access modifier to public
    int hp; // Public attributes that are accessible anywhere in the program
    char level;
};

int main()
{
    Hero H1;
    H1.hp = 100;    // Accessing hp using dot operator
    H1.level = 'A'; // Accessing level using dot operator

    cout << "Hit points of Hero h1 = " << H1.hp << endl;
    cout << "Level of Hero h1 = " << H1.level << endl;
}
