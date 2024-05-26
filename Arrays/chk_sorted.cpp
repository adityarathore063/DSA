#include<bits/stdc++.h>
using namespace std;

bool chk_sorted(int arr[], int n){
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){

    // check the given array is sorted or not
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<chk_sorted(arr, n)<<"\n";
    return 0;
}