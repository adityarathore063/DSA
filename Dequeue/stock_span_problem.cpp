#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<int> stockSpan(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (arr[i] >= arr[j])
                days++;
            // else
            //     break;
        }
        ans.push_back(days);
    }
    return ans;
}
int main()
{

    // Stock span problem
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = stockSpan(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}