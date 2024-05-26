#include <bits/stdc++.h>
using namespace std;

//Naive solution
void frequency(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        cout << arr[i] << " " << count << "\n";
    }
}
// Efficient solution (using hash map)
void frequency2(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
int main()
{

    // Print the frequency of arrray elements
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    frequency(arr, n);
    frequency2(arr, n);
    return 0;
}