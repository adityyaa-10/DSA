// Inheritance.cpp
#include <iostream>
using namespace std;

class Human
{
private:
    int height;
    int weight;
    int age;

public:
    void setAge(int age)
    {
        this->age = age;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    int getAge()
    {
        return this->age;
    }
};

class Male : public Human
{
public:
    string hairColor;

    void sleep()
    {
        cout << "I am sleeping" << endl;
    }
};

int main()
{
    Male Adi;
    Adi.hairColor = "Black";
    Adi.sleep();

    Adi.setAge(20);
    int age = Adi.getAge();
    cout << "Adi's age" << age << endl;
}