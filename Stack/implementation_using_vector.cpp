#include <bits/stdc++.h>
using namespace std;

class Mystack
{
    vector<int> v;

public:
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
};
int main()
{

    // Stack implementation using vector
    Mystack s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << s.size() << "\n";
    cout << s.peek() << "\n";
    s.pop();
    cout << s.peek() << "\n";
    s.pop();
    cout << s.isEmpty() << "\n";
    cout << s.peek() << "\n";
    s.pop();
    cout << s.isEmpty() << "\n";

    return 0;
}