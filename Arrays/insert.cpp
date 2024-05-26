#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int cap, int x, int pos){
    if(n==cap){
        return n;
    }
    int index = pos -1;
    for(int i = n-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return n+1;
}
int main(){

    // Insert an element at given position;
    int cap, n, x, pos;
    cin>>cap>>n>>x>>pos;
    int arr[cap];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    n = insert(arr, n, cap, x, pos);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}