#include <bits/stdc++.h>
using namespace std;

const int ch = 256;
void frequency(string &s)
{
    int count[ch] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    int mx = INT_MIN;
    for (int i = 0; i < ch; i++)
    {
        mx = max(count[i], mx);
    }
    cout << mx << "\n";
}
int main()
{

    // Find the frequency of maximum occuing character in the string
    string s;
    cin >> s;
    frequency(s);

    return 0;
}