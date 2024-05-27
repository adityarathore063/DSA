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
};
int main()
{
    Minheap h(12);
    return 0;
}