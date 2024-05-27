#include <bits/stdc++.h>
using namespace std;

// Approach1
class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        N = 0;
    }
    void push_ele(int x)
    {
        q2.push(x);
        N++;
        while (q1.empty() == false)
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop_ele()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
        return N;
    }
};

// Approach2
class Stack2
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack2()
    {
        N = 0;
    }
    void push_ele(int x)
    {
        q1.push(x);
        N++;
    }

    void pop_ele()
    {
        if (q1.empty())
            return;
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int size()
    {
        return N;
    }

    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }
};
int main()
{

    // Implementaion of stack using queue
    // Approach1 -> Making Push operation costly
    Stack st;
    st.push_ele(1);
    st.push_ele(2);
    st.push_ele(3);
    st.push_ele(4);
    cout << st.size() << "\n";
    cout << st.top() << "\n";
    st.pop_ele();
    cout << st.size() << "\n";
    cout << st.top() << "\n";

    // Approach2 -> Making Pop operation costly
    Stack2 s;
    s.push_ele(1);
    s.push_ele(2);
    s.push_ele(3);
    s.push_ele(4);
    cout << s.size() << "\n";
    cout << s.top() << "\n";
    s.pop_ele();
    cout << s.size() << "\n";
    cout << s.top() << "\n";

    return 0;
}