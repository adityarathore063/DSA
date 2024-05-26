#include<bits/stdc++.h>
using namespace std;

// Naive Solution
bool chk_power(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n = n/2;
    }
    return true;
}

// Efficient Method
bool chk_power1(int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
}
// or one line solution
//  bool chk_power(int n){
//     return ((n!=0) && (n&(n-1)==0));
// }
int main(){

    // check the given number is power of 2 or not
    int n;
    cin>>n;
    // Naive solution
    cout<<chk_power(n)<<"\n";
    // Efficient Method
    cout<<chk_power1(n)<<"\n";

    return 0;
}