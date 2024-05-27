#include <bits/stdc++.h>
using namespace std;

// Naive Partition
void naive_partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}
// Lomuto's Partition
int lomuto(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

// Hoare's Partition
int hoare(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{

    // Partition function for quick sort
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // naive_partition(arr, 0, 5, 5);
    // int x = lomuto(arr,0,5);
    int x = hoare(arr, 0, 7);
    cout << x << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}