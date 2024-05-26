#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int x){
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    // Write a program to find the given element is present in an array or not 
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<linear_search(arr, n, x)<<"\n";
    return 0;
}