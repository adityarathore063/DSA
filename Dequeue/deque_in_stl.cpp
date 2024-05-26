#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Dequeue in STl
    deque<int> dq = {10, 15, 20};
    dq.push_front(5);
    dq.push_back(50);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << dq.front() << " " << dq.back() << " \n";
    auto it = dq.begin();
    it++;
    dq.insert(it, 20);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    cout << dq.size() << "\n";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}