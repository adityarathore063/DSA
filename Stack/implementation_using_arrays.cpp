#include <bits/stdc++.h>
using namespace std;

class Mystack
{
    int *arr;
    int cap;
    int top;

public:
    Mystack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "stack overflow\n";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is emppty\n";
            return;
        }
        top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return 0;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};
int main()
{

    // Implementation of stack using arrays
    Mystack s(10);
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