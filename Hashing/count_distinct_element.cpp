#include<bits/stdc++.h>
using namespace std;

// Naive Approach
int countDisElements(int arr[], int n){
    int count = 0;
    for(int i= 0; i<n; i++){
        bool flag = true;
        for(int j = 0; j<i; j++){
            if(arr[i]==arr[j]){
                flag = false;
                break;
            }
        }
        if(flag)
            count++;
    }
    return count;
}

// Efficient solution (using unordered set)
int countDisElements2(int arr[], int n){
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }
    return s.size();
}
// Improved Efficient solution
int countDisElements3(int arr[], int n){
    unordered_set<int> s(arr, arr+n);
    return s.size();
}
int main(){

    // count the distinct elements in an array
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<countDisElements(arr, n)<<"\n";
    cout<<countDisElements2(arr, n)<<"\n";
    cout<<countDisElements3(arr, n)<<"\n";
    

    return 0;
}