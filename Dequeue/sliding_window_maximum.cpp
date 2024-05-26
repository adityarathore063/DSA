#include <bits/stdc++.h>
using namespace std;

// Naive Solution t.c = O(n*k)
void windowMax(vector<int> v, int n, int k)
{
    int mx;
    for (int i = 0; i <= n - k; i++)
    {
        mx = v[i];
        for (int j = i; j < (i + k); j++)
        {
            mx = max(mx, v[j]);
        }
        cout << mx << " ";
    }
    cout << "\n";
}
int main()
{

    // Sliding window maximum technique
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    windowMax(v, n, k);
    return 0;
}