#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
// optimized bubble sort useful when array is sorted
void bubbleSort_opt(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        bool flag = true;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // bubbleSort(arr, n);
    bubbleSort_opt(arr, n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}