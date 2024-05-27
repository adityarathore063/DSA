#include<bits/stdc++.h>
using namespace std;

int main(){
    // size of array and pointer
    // int arr1[] = {1, 2, 3};
    // float arr2[] = {2.4, 3.6, 7.8};
    // int *ptr1 = arr1;
    // float *ptr2 = arr2;
    // cout<<sizeof(arr1)<<"\n";
    // cout<<sizeof(arr2)<<"\n";
    // cout<<sizeof(ptr1)<<"\n";
    // cout<<sizeof(ptr2)<<"\n";

    // Exercise
    int arr[] = {10, 20, 30};
    int *ptr1 = arr;
    // ++*ptr1; // operator precdence is same then by associativity i.e from right to left
    // *ptr1++; // operator precdence of postfix operator is more than * or prefix operator
    *++ptr1;
    cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr1<<"\n";

    return 0;
}