#include <bits/stdc++.h>
using namespace std;

void reverse_sentence(string &s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{

    // Reverse a sentence
    string s;
    getline(cin, s);
    reverse_sentence(s);
    return 0;
}