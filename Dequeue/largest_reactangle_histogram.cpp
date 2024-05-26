#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
int maxReactangle1(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int minih = INT_MAX;
        for (int j = i; j < n; j++)
        {
            minih = min(arr[i], minih);
            int l = j - i + 1;
            ans = max(ans, l * minih);
        }
    }
    return ans;
}
int main()
{

    // Largest Reactangle in a Histogram
    // Given an array each element represents the height of the histogram's bar and the width of the each bar
    // is 1, find the area of largest rectangle histogram
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxReactangle1(arr, n) << "\n";
    return 0;
}