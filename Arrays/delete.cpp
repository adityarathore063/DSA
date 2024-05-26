#include<bits/stdc++.h>
using namespace std;

int delete_element(int arr[], int n, int x){
    int i;
    if(arr[n-1]==x){
        return n-1;
    }
    for(i = 0; i<n; i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j = i; j<n-1; j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}
int main(){

    // Delete an element from array
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    n = delete_element(arr, n, x);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}