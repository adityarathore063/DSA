#include<bits/stdc++.h>
using namespace std;

int main(){

    // Given an array of n number that has values in range [1, n+1]. 
    // Everyb no. appears exactly once Hence one no. is missing. Find the missing no
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int res = 0;
    for(int i = 1; i<=n+1; i++){
        res = res^i;
    }
    for(int i = 0; i<n; i++){
        res = res^arr[i];
    }
    cout<<res<<"\n";

    return 0;
}