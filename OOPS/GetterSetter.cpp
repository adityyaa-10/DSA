#include <iostream>
using namespace std;

class student
{
private:
    int rollNumber;

public:
    int getRollNumber()
    {
        return rollNumber;
    }

    void setRollNumber(int rollNumber)
    {
        this->rollNumber = rollNumber;
    }
};

int main()
{
    student s1;
    s1.setRollNumber(1);
    cout << s1.getRollNumber() << endl;
    return 0;
}