#include <bits/stdc++.h>
using namespace std;

class Minheap
{
    int *arr;
    int size, capacity;

public:
    Minheap(int c)
    {
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 and arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};
int main()
{
    Minheap h(12);
    h.insert(3);
    h.insert(7);
    h.insert(2);
    h.insert(12);
    h.insert(10);
    return 0;
}