#include<bits/stdc++.h>
using namespace std;

// Iterative solution (best way)
int factorial(int n){
    int fact = 1;
    for(int i = 2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

// Recursive solution
int factorial1(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){

    // Find the factorial of a number
    int n;
    cin>>n;
    // Iterative implementation
    cout<<factorial(n)<<"\n";
    // Recursive Solution
    cout<<factorial1(n)<<"\n";

    return 0;
}