#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class student
{
public:
    int roll = 1;
    string name;
    int marks;
    int checkTopper(int m1, int m2)
    {
        if (m1 > m2)
            return m1;
        else
            return m2;
    }
};

int main()
{
    student s1, s2;
    // s1.roll = 10;
    s1.name = "Pandey";
    s2.name = "Aditya";
    cout << "Enter Pandey's marks: ";
    cin >> s1.marks;
    cout << "Enter Aditya's marks: ";
    cin >> s2.marks;

    int topper = s1.checkTopper(s1.marks, s2.marks);
    cout << "Topper's marks: " << topper << endl;
    // cout << s1.roll << " " << s1.name << endl;
    return 0;
}
