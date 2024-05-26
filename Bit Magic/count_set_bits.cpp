#include<bits/stdc++.h>
using namespace std;

// naive solution
int count1(int n){
    int res = 0;
    while(n>0){
        if((n&1)==1){
            res++;
        }
        n = n>>1;
    }
    return res;
}

// Brian Kerningams Algorithm
int count2(int n){
    int res = 0;
    while(n>0){
        n = n&(n-1);
        res++;
    }
    return res;
}
int main(){

    // count set bits in a positive number
    int n;
    cin>>n;
    // Naive Solution
    cout<<count1(n)<<"\n";
    // Brian Kerningams Algorithm
    cout<<count2(n)<<"\n";

    return 0;
}