#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks[3];
    float average;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setMarks(int marks[])
    {
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = marks[i];
        }
    }
    void setAverage()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        average = sum / 3.0;
    }
    string getName()
    {
        return name;
    }
    float getAverage()
    {
        return average;
    }
};

int main()
{
    Student S[10];
    int n;
    cout << "Enter Number of Students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks[3];
        cout << "Enter Name of Student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter Marks of Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++)
        {
            cin >> marks[j];
        }
        S[i].setName(name);
        S[i].setMarks(marks);
        S[i].setAverage();
    }
    cout << "Name\tAverage" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << S[i].getName() << "\t" << S[i].getAverage() << endl;
    }
}
