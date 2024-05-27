#include<bits/stdc++.h>
using namespace std;

int subset(int arr[], int n, int sum){
    if(n==0){
        return (sum==0)?1:0;
    }
    return (subset(arr, n-1, sum) + subset(arr, n-1, sum-arr[n-1]));
}
int main(){

    // return the no of subset whose sum is equal to given sum
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<subset(arr, n, sum)<<"\n";
    return 0;
}