#include<bits/stdc++.h>
using namespace std;

// naive method
bool checkprime1(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// Efficient method
bool checkprime2(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// More efficient method
bool chechprime3(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i = 5; i<=sqrt(n); i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(){
    // write a program to check the given number is prime or not
    int n;
    cin>>n;
    // naive method
    cout<<checkprime1(n)<<"\n";
    // efficent method
    cout<<checkprime2(n)<<"\n";
    // More efficient method
    cout<<chechprime3(n)<<"\n";

    return 0;
}