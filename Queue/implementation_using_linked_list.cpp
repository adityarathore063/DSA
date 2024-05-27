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

class Queue
{
public:
    node *front, *rear;
    int size;

    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enque(int x)
    {
        node *temp = new node(x);
        size++;
        if (front = NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deque()
    {
        if (front == NULL)
        {
            return;
        }
        size--;
        node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete (temp);
    }
};

int main()
{

    // Implementation of Queue using linked list
    Queue q;
    q.enque(10);
    cout << q.front->data << "\n";
    q.enque(20);
    q.enque(30);
    // cout << q.front->data << " " << q.rear->data << "\n";
    return 0;
}