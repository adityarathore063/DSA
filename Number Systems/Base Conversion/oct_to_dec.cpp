#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int base = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        ans += (rem * base);
        base = base * 8;
        n = n/10;
    }
    cout << ans << "\n";

    return 0;
}