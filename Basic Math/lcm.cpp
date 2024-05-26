#include<bits/stdc++.h>
using namespace std;

// naive solution
int lcm1(int a, int b){
    int res = max(a, b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}

// Efficient solution
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int lcm2(int a, int b){
    return (a*b)/gcd(a, b);
}

int main(){

    // program to find the LCM of two numbers
    int a, b;
    cin>>a>>b;
    // naive solution
    cout<<lcm1(a, b)<<"\n";
    // Efficient solution
    cout<<lcm2(a, b)<<"\n";

    return 0;
}