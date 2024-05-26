#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){
    int count = 1, i = 1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<"\n";
        i++;
        count = 1;
    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" 1"<<"\n";
    }
}
int main(){

    // Print the frequency of element in a sorted array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    frequency(arr, n);
    return 0;
}