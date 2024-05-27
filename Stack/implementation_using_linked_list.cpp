#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Mystack
{
    node *head;
    int sz;

public:
    Mystack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack underflow"
                 << "\n";
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
        sz--;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head->data;
    }
};
int main()
{

    // Implementation of stack using linked list
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