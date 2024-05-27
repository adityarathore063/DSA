#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Queue in c++ stl
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << " " << q.back() << "\n";
    q.pop();
    cout << q.front() << " " << q.back() << "\n";
    cout << q.size() << "\n";
    cout << q.empty() << "\n";
    q.push(10);
    while (q.empty() == false)
    {
        cout << q.front() << " " << q.back() << "\n";
        q.pop();
    }

    return 0;
}