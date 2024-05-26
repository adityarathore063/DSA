#include<bits/stdc++.h>
using namespace std;

int remove(int arr[], int n){
    int res = 1;
    for(int i = 1; i<n; i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main(){

    // Remove the duplicates from an sorteed array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    n = remove(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}