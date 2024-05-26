#include<bits/stdc++.h>
using namespace std;

// naive solutiton
void all_divisor1(int n){
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

// Efficient solution
void all_divisor2(int n){
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
               cout<<n/i<<" ";
            }
        }
    }
    cout<<"\n";
}

// Best efficient solution
void all_divisor3(int n){
    for(int i = 1; i<sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i = sqrt(n); i>=1; i-- ){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    cout<<"\n";
}
int main(){

    // Find all divisor of a number
    int n;
    cin>>n;
    // Naive solution
    all_divisor1(n);
    // Efficent solution (gives in unsorted order)
    all_divisor2(n);
    // Best efficient solution(gives in sorted order)
    all_divisor3(n);


    return 0;
}