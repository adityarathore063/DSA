#include<bits/stdc++.h>
using namespace std;

// Naive solution
int power1(int x, int n){
    int res = 1;
    for(int i = 1; i<=n; i++){
        res*=x;
    }
    return res;
}

// Efficient Solution (recursive)
int power2(int x, int n){
    if(n==0){
        return 1;
    }
    int temp = power2(x, n/2);
    temp = temp*temp;
    if(n%2==0){
        return temp;
    }
    else{
        return temp*x;
    }
}
// More Efficient solution(Iterative power using binary Exponenetiation)
int power3(int x, int n){
    int res = 1;
    while(n>0){
        if(n&1) // or(n%2!=0)
            res = res*x;
        x*=x;
        n=n>>1;// or (n=n/2)
    }
    return res;
}
int main(){

    // compute the power
    int x, n;
    cin>>x>>n;
    // Naive solution
    cout<<power1(x, n)<<"\n";
    // Efficient solution (recursive solution)
    cout<<power2(x, n)<<"\n";
    // Iterative power (using binary exponenetiation)
    cout<<power3(x,n)<<"\n";

    return 0;
}