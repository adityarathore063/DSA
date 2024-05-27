#include <bits/stdc++.h>
using namespace std;

// Approach 1
class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enque(int x)
    {
        s1.push(x);
    }
    int deque()
    {
        if (s1.empty() and s2.empty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        if (s2.empty())
        {
            while (s1.empty() == false)
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool isEmpty()
    {
        if (s1.empty() and s2.empty())
            return true;
        return false;
    }
};
// Approach 2
class Queue1
{
    stack<int> s;

public:
    void enque(int x)
    {
        s.push(x);
    }
    int deque()
    {
        if (s.empty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        int x = s.top();
        s.pop();
        if (s.empty())
        {
            return x;
        }
        int item = deque();
        s.push(x);
        return item;
    }
};
int main()
{

    // Implement Queue using stack

    // Approach 1 -> using 2 stack and deque operation costly
    // enque operation:- push x to stack1;
    // deque operation:- 1. if both stack are empty then print error
    //                   2. if stack2 is empty
    //                      while stack1 is not empty, push everything from stack1 to stack2
    //                   3. Pop the element from stack2 and return it

    Queue q;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        q.enque(arr[i]);
    }
    cout << q.isEmpty() << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << q.deque() << "\n";
    }
    cout << q.isEmpty() << "\n";

    // Approach 2 -> Using function call stack

    // enque operation:- push x to stack1
    // deque operation:- if stack1 is empty then print error
    //                   if stac1 has only one element the return it
    //                   3. Recursively pop everything from stack1, store the popped item in a variable res
    //                      push the res back to stack1 and return res
    Queue1 q1;
    for (int i = 0; i < 5; i++)
    {
        q1.enque(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << q1.deque() << "\n";
    }
    return 0;
}