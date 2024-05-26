#include<bits/stdc++.h>
using namespace std;

// two traversal approach
int first_largest(int arr[], int n){
    int largest = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return largest;
}
int second_largest(int arr[], int n){
    int largest = first_largest(arr, n);
    int res = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}
// one traversal approach
int second_largest1(int arr[], int n){
    int largest = 0;
    int res = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]<arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}
int main(){
    // Find the second largest element(index) in an array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // Two traversal approach
    cout<<second_largest(arr, n)<<"\n";
    //one traversal approach
    cout<<second_largest1(arr, n)<<"\n";

    return 0;
}