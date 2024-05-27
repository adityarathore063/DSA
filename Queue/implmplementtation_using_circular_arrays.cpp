#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int front, cap, size, rear;
    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int(cap);
        rear = cap-1;
    }
    bool isFull()
    {
        return (cap == size);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return front;
        }
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return (front + size - 1) % cap;
        }
    }
    void enque(int x)
    {
        if (isFull())
        {
            return;
        }
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void deque()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }
};
int main()
{

    // Efficient implementation using circular arrays
    Queue q(5);
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        q.enque(ele);
    }
    cout << q.isFull() << "\n";
    cout << q.isEmpty() << "\n";
    cout << q.getFront() << "\n";
    cout << q.getRear() << "\n";
    q.deque();
    cout << q.getRear() << "\n";
    cout << q.getFront() << "\n";

    return 0;
}