#include <bits/stdc++.h>
using namespace std;

// Naive Approach
void pat_search1(string &txt, string &pat)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}
// Optimized Naive Approach (for all charachters of patterns are distinct)
void pat_search2(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i += j;
        }
    }
    cout << "\n";
}
int main()
{

    // Pattern searching;
    string txt, pat;
    cin >> txt >> pat;
    pat_search1(txt, pat);
    pat_search2(txt, pat);
    return 0;
}