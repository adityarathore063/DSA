#include<bits/stdc++.h>
using namespace std;
// Efficient approach
int largest_element(int arr[], int n){
    int res = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[res])
        res = i;
    }
    return res;

}
int main(){

    // Find the largest element in the array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largest_element(arr, n)<<"\n";
    return 0;
}