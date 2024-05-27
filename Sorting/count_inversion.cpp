#include <bits/stdc++.h>
using namespace std;

// Naive Approach
int inversion1(int arr[], int n)
{
    int inv = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                inv++;
            }
        }
    }
    return inv;
}
// Optimized Approach (using merge sort)
long long merge(int arr[], int l, int mid, int h)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i; // a[i], a[i+1], a[i+2].....a[] > b[j] and i<j
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[i];
        k++;
        j++;
    }
    return inv;
}
long long mergeSort(int arr[], int l, int h)
{
    long long inv = 0;
    if (l < h)
    {
        int mid = (l + h) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, h);
        inv += merge(arr, l, mid, h);
    }
    return inv;
}
int main()
{

    // count the inversions in the given array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << inversion1(arr, n) << "\n";
    cout << mergeSort(arr, 0, n - 1) << "\n";
    return 0;
}