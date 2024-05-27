#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}
int main(){

    // Merge two sorted arrays
    int a[] = {1, 4, 5, 8};
    int b[] = {10, 17, 19};
    merge(a,b,4,3);
    return 0;
}