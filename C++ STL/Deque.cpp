#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    d.pop_back();

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at first index in deque d : " << d.at(1) << endl;
    cout << "First element in deque d : " << d.front() << endl;
    cout << "Last element in deque d : " << d.back() << endl;

    cout << "Size before Erasing " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "Size after Erasing " << d.size() << endl;
}