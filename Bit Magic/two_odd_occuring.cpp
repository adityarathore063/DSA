#include<bits/stdc++.h>
using namespace std;

// Naive solution
void two_odd(int arr[], int n){
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count%2!=0)
            cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
// Efficient solution
void two_odd1(int arr[], int n){
    int XOR = 0, res1 = 0, res2 = 0;
    for(int i = 0; i<n; i++){
        XOR=XOR^arr[i];
    }
    int sn = XOR&(~(XOR-1));
    for(int i = 0; i<n; i++){
        if((arr[i]&sn)!=0){
            res1 = res1^arr[i];
        }
        else{
            res2 = res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2<<"\n";
}
int main(){
    // print the two elements of array which is occuring odd times
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    two_odd(arr,n);
    two_odd1(arr,n);
    return 0;
}