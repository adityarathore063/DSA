#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{

    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topEle = st.top();
    st.pop();
    insertAtBottom(st, ele);

    st.push(topEle);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}
int main()
{

    // Reverse a stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";

    return 0;
}