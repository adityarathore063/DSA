#include <bits/stdc++.h>
using namespace std;

// Quick sort using lomuto's partition
int lomuto(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
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
void q_sort1(int arr[], int l, int h)
{
    if (l < h) // Atleast two elements
    {
        int p = lomuto(arr, l, h);
        q_sort1(arr, l, p - 1);
        q_sort1(arr, p + 1, h);
    }
}

// Quick sort using hoare's partition
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

void q_sort2(int arr[], int l, int h)
{
    if (l < h) // Atleast two elements
    {
        int p = hoare(arr, l, h);
        q_sort2(arr, l, p);
        q_sort2(arr, p + 1, h);
    }
}
int main()
{

    // Quick Sort Algorithms
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // q_sort1(arr, 0, n - 1);// using lomuto partition
    q_sort2(arr, 0, 5); // using hoare partition
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}