#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
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
// naive solution
void primefactors1(int n){
    if(n<=1){
        return;
    }
    for(int i = 2; i<n; i++){
        if(isprime(i)){
            int x = i;
            while(n%x==0){
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
    cout<<"\n";
}

// Efficient Solution
void primefactor2(int n){
    if(n<=1){
        return;
    }
    for(int i = 2; i<=sqrt(n); i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1){
        cout<<n;
    }
    cout<<"\n";
}

// More Efficient solution
void primefactor3(int n){
    if(n<=1){
        return;
    }
    while(n%2==0){
        cout<<"2"<<" ";
        n = n/2;
    }
    while(n%3==0){
        cout<<"3"<<" ";
        n = n/3;
    }
    for(int i = 5; i<=sqrt(n); i= i+6){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
        while(n%(i+2)==0){
            cout<<(i+2)<<" ";
            n = n/(i+2);
        }
    }
    if(n>3){
        cout<<n;
    }
    cout<<"\n";
    
}
int main(){

    int n;
    cin>>n;
    // naive solution
    primefactors1(n);
    // Efficient solution
    primefactor2(n);
    // More Efficient solution
    primefactor3(n);

    return 0;
}