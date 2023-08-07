#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("ghi");
    s.push("def");
    s.push("abc");

    cout << "Top Element --> " << s.top() << endl;

    s.pop();
    cout << "Top Element --> " << s.top() << endl;
    cout << "Size of stack --> " << s.size() << endl;

    int isEmpty = s.empty(); // empty() function returns a boolean value {True or False}

    if (isEmpty == 1)
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
}