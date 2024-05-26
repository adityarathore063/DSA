#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

// Naive solution
int trail_zero1(int n){
    int x = factorial(n);
    int res = 0;
    while(x%10==0){
        res++;
        x/=10;
    }
    return res;
}

// Efficient solution
int trail_zero2(int n){
    int res = 0;
    for(int i = 5; i<=n; i=i*5){
        res+=n/i;
    }
    return res;
}
int main(){

    // Find the trailing zeroes in factorial
    int n;
    cin>>n;
    // Naive solution
    cout<<trail_zero1(n)<<"\n";
    // Efficient solution
    cout<<trail_zero2(n)<<"\n";


    return 0;
}