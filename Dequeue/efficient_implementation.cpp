#include <bits/stdc++.h>
using namespace std;

class Deque
{
    int *arr;
    int front, size, cap;

public:
    Deque(int c)
    {
        cap = c;
        arr = new int[cap];
        front = 0;
        size = 0;
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    bool isFull()
    {
        return (size == cap);
    }
    void deleteFront()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }
    void insertRear(int x)
    {
        if (isFull())
            return;
        int new_rear = (front + size) % cap;
        arr[new_rear] = x;
        size++;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return arr[front];
    }
    void insertFront(int x)
    {
        if (isFull())
            return;
        front = (front + cap - 1) % cap;
        arr[front] = x;
        size++;
    }
    void deleteRear()
    {
        if (isEmpty())
            return;
        size--;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return arr[(front + size - 1) % cap];
    }
};
int main()
{

    Deque dq(5);
    dq.insertFront(5);
    dq.insertRear(10);
    dq.insertFront(15);
    dq.insertRear(20);
    cout << dq.getFront() << " " << dq.getRear() << "\n";

    return 0;
}