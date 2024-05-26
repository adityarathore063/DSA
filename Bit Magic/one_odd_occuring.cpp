#include <bits/stdc++.h>
using namespace std;

// Naive Solution
int odd_occuring(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                res++;
            }
        }
        if (res % 2 != 0)
        {
            return arr[i];
        }
    }
    return 0;
}
// Efficient Solution
int odd_occuring1(int arr[], int n){
    int res = 0;
    for(int i = 0; i<n; i++){
        res = res^arr[i];
    }
    return res;
}
int main()
{

    int n;
    cin >> n;
    // Find the one odd occuring number in an array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Naive Solution
    cout<<odd_occuring(arr, n)<<"\n";
    // Efficient solution
    cout<<odd_occuring1(arr, n);

    return 0;
}