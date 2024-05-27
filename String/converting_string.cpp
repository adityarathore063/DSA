#include <bits/stdc++.h>
using namespace std;

void into_uppercase(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
}
void into_lowercase(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}
int main()
{

    // convert the string into uppercase and after lower case
    string s;
    cin >> s;
    into_uppercase(s);
    cout << s << "\n";
    into_lowercase(s);
    cout << s << "\n";
    // Inbuilt function for conversion
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << "\n";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << "\n";
    return 0;
}