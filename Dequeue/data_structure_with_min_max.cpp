#include <bits/stdc++.h>
using namespace std;

class MyDs
{
    deque<int> dq;

public:
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    void extractMin()
    {
        dq.pop_front();
    }
    void extractMax()
    {
        dq.pop_back();
    }
};
int main()
{

    // Design a data structure that supports following operations in O(1) times
    MyDs m;
    m.insertMin(7);
    m.insertMax(10);
    m.insertMin(2);
    m.insertMax(23);
    cout << m.getMax() << " " << m.getMin() << endl;

    return 0;
}