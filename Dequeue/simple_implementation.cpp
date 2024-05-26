#include <bits/stdc++.h>
using namespace std;

class Deque
{
    int cap, size, *arr;

public:
    Deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return (size == cap);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void insertRear(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
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
            return arr[size - 1];
    }
    void insrtFront(int x)
    {
        if (isFull())
            return;
        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = x;
        size++;
    }
    void deleteFront()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    int getFront()
    {
        return (arr[0]);
        ;
    }
};
int main()
{

    // Dequeue Implementaion using array (simple)
    Deque dq(5);
    dq.insrtFront(5);
    dq.insertRear(10);
    dq.insrtFront(67);
    cout << dq.getFront() << "\n";
    cout << dq.getRear() << "\n";
    dq.deleteFront();
    cout << dq.getFront() << "\n";

    return 0;
}