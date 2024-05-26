#include<bits/stdc++.h>
using namespace std;

// naive solution
void leader(int arr[], int n){
    for(int i = 0; i<n; i++){
        bool flag = true;
        for(int j = i+1; j<n; j++){
            if(arr[j]>=arr[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\n";
}
// Efficient solution
void leader1(int arr[], int n){
    vector<int> v;
    int ldr = arr[n-1];
    v.push_back(ldr);
    for(int i = n-2; i>=0; i--){
        if(ldr<arr[i]){
            ldr = arr[i];
            v.push_back(ldr);
        }
    }
    for(int i = v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    
}
int main(){

    // Find the leaders in an array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // naive approach
    leader(arr, n);
    // Efficient approach
    leader1(arr, n);
    return 0;
}