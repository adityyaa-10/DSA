#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int a = num;

    cout << "A before --> " << num << endl;
    a++;
    cout << "A after --> " << num << endl;

    // In the above case no changes will take place because a creates a new memory location and num is not changed in any case

    int num2 = 7;
    int *ptr = &num2;

    cout << "ptr before --> " << num2 << endl;
    (*ptr)++;
    cout << "ptr after --> " << num2 << endl;

    // In this case, num will be incremented because *ptr is pointing towards the memory block of variable num;

    int number = 3;
    int *p = &number;

    // For *p

    cout << "*p before --> " << *p << endl;
    (*p)++;
    cout << "*p after --> " << *p << endl; // Increment the value present at ptr address by 1

    // For p

    cout << "p before --> " << p << endl;
    p++;
    cout << "p after --> " << p << endl; // Increment the ptr address by 4 (sizeof(number))
}