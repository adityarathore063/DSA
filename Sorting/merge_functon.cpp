#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int n1 = (mid-low+1);
    int n2 = (high - mid);
    int left[n1], right[n2];
    for(int i = 0; i<n1; i++){
        left[i]=arr[low+i];
    }
    for(int i = 0; i<n2; i++){
        right[i]=arr[mid+i+1];
    }
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
}
int main(){

    // write a function which takes an array, a low index, a mid index and a high index and the given 
    // is sorted from low to mid and mid+1 to high already this function returns a sorted array after merging
    // both parts of the array
    int arr[] = {10, 15, 20, 11, 30};
    merge(arr,0,2,4);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}