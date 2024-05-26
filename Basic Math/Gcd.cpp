#include<bits/stdc++.h>
using namespace std;

// Naive solution
int gcd1(int a, int b){
    int res = min(a, b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

// using Euclidean Algorithm
int gcd2(int a, int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

// Optimized Implementation of Euclidean Algorithms(recursive)
int gcd3(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd3(b, a%b);
    }
}
int main(){

    // Write a program to find GCD of two numbers
    int a, b;
    cin>>a>>b;
    // Naive Solution
    cout<<gcd1(a, b)<<"\n";
    // using Euclidean Algorithm
    cout<<gcd2(a,b)<<"\n";
    // Optimized Implementation of Euclidean Algorithms(recursive)       
    cout<<gcd3(a, b)<<"\n";

    return 0;
}