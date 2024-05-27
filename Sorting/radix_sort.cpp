#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int exp)
{
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(arr[i], mx);
    }

    for (int exp = 1; mx / exp > 0; exp = exp * 10)
    {
        countSort(arr, n, exp);
    }
}
int main()
{

    // Radix Sort
    int arr[] = {319, 212, 6, 8, 100, 50};
    radixSort(arr,6);
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}