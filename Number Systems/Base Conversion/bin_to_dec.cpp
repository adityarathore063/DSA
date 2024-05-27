#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int num = 0;
    int i = 1;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        num = num + rem * i;
        i = i * 2;
    }
    cout << num << "\n";

    return 0;
}