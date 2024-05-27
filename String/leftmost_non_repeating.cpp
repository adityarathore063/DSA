#include <bits/stdc++.h>
using namespace std;

// Naive solution
int leftmost_non1(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        bool flag = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (i != j && s[i] == s[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            return i;
        }
    }
    return -1;
}
// Better solution (in two traversal)
const int ch = 256;
int leftmost_non2(string &s)
{
    int count[ch] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}
// Optimized approach (in one traversal)
int leftmost_non(string &s)
{
    int count[ch];
    for (int i = 0; i < ch; i++)
    {
        count[i] = -1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i]] == -1)
        {
            count[s[i]] = i;
        }
        else
        {
            count[s[i]] = -2;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < ch; i++)
    {
        if (count[i] >= 0)
        {
            res = min(res, count[i]);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}
int main()
{

    // Leftmost Non repeating character
    string s;
    cin >> s;
    cout << leftmost_non1(s) << "\n";
    cout << leftmost_non2(s) << "\n";
    cout << leftmost_non(s) << "\n";
    return 0;
}