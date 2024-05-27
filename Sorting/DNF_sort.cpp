#include<bits/stdc++.h>
using namespace std;

void dnfSort(int arr[], int n){
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){

    // Given an array of 0, 1 and 2 you have to sort the array in O(n) time, single pass and O(1) space 
    // DNF Sort (Dutch National flag sort algorithm) (we can also use for other only three numbers)
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    dnfSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}