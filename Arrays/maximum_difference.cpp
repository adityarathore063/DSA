#include<bits/stdc++.h>
using namespace std;

// Naive solution
int difference(int arr[], int n){
    int max_diff = INT_MIN;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            int diff = arr[j]-arr[i];
            max_diff = max(max_diff, diff);
        }
    }
    return max_diff;
}
// Efficient solution
int differenec1(int arr[], int n){
    int res = arr[1]-arr[0];
    int min_val = arr[0];
    for(int i = 1; i<n; i++){
        res = max(res, arr[i]-min_val);
        min_val = min(min_val,arr[i]);
    }
    return res;
}
int main(){

    // Maximum difference (Maximum value of arr[j]-arr[i] such that j>i)
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // Naive solution
    cout<<difference(arr, n)<<"\n";
    // Efficient solution
    cout<<differenec1(arr, n)<<"\n";
    return 0;
}