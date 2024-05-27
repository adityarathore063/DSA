#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<char> v;
    while (n > 0)
    {
        int temp = n % 16;
        n = n / 16;
        if (temp < 10)
            v.push_back(temp + 48);
        else
            v.push_back(temp + 55);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    cout << "\n";

    return 0;
}