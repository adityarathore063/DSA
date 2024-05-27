#include<bits/stdc++.h>
using namespace std;

// naive solution
int func1(int arr[], int n){
    int ans = INT_MAX;
    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){
            ans = min(ans, abs(arr[i]-arr[j]));
        }
    }
    return ans;
}
// Efficient Soution
int func2(int arr[], int n){
    sort(arr,arr+n);
    int ans = INT_MAX;
    for(int i = 1; i<n; i++){
        ans = min(ans, arr[i]-arr[i-1]);
    }
    return ans;
}
int main(){

    // Find the minimum difference in an array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<func1(arr, n)<<"\n";
    cout<<func2(arr,n)<<"\n";
    return 0;
}