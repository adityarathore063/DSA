#include <bits/stdc++.h>
using namespace std;

const int ch = 256;
// Naive solution
bool areanagram(string &pat, string &txt, int i)
{
    int count[ch] = {0};
    for (int j = 0; j < pat.length(); j++)
    {
        count[pat[j]]++;
        count[txt[i + j]]--;
    }
    for (int j = 0; j < ch; j++)
    {
        if (count[j] != 0)
        {
            return false;
        }
    }
    return true;
}

bool isPresent(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m; i++)
    {
        if (areanagram(pat, txt, i))
        {
            return true;
        }
    }
    return false;
}

// Efficient solution
bool aresame(int ct[], int cp[])
{
    for (int i = 0; i < 256; i++)
    {
        if (ct[i] != cp[i])
        {
            return false;
        }
    }
    return true;
}

bool ispresent1(string &txt, string &pat)
{
    int ct[ch] = {0};
    int cp[ch] = {0};
    for (int i = 0; i < pat.length(); i++)
    {
        cp[pat[i]]++;
        ct[txt[i]]++;
    }

    for (int i = pat.length(); i < txt.length(); i++)
    {
        if (aresame(ct, cp))
        {
            return true;
        }
        ct[txt[i]]++;
        ct[txt[i - pat.length()]]--;
    }
    return false;
}
int main()
{

    // chech the anagram of given pattern is present on the given text or not
    string txt, pat;
    cin >> txt >> pat;
    cout << isPresent(txt, pat) << "\n";
    cout << ispresent1(txt, pat) << "\n";
    return 0;
}