#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int dec_value = 0;
    int base = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
            dec_value += (s[i] - 48) * base;
        else if (s[i] >= 'A' and s[i] <= 'F')
            dec_value += (s[i] - 55) * base;
        base = base * 16;
    }
    cout << dec_value << "\n";

    return 0;
}