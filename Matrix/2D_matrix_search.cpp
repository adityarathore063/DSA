#include<bits/stdc++.h>
using namespace std;

int main(){

    // Given a n x m matrix
    // Write an algorithm to find that the given value exists in the matrix or not
    // row and columns are sorted
    int n, m, x;
    cin>>n>>m>>x;
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int s = 0, e = m-1;
    while(s<n && e>=0){
        if(arr[s][e]==x){
            cout<<"Found"<<"\n";
            return 0;
        }
        else if(arr[s][e]>x){
            e--;
        }
        else{
            s++;
        }

    }

    cout<<"Not Found"<<"\n";

    return 0;
}