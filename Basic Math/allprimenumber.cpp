#include<bits/stdc++.h>
using namespace std;

bool chk_prime(int n){
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

// Naive solution
void allprime1(int n){
    for(int i = 2; i<=n; i++){
        if(chk_prime(i)){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

// Efficient solution (Sieve of Eratosthenes)
void allprime2(int n){
    vector<bool> isprime(n+1, true);
    for(int i = 2; i<=sqrt(n); i++){
        if(isprime[i]){
            for(int j = 2*i; j<=n; j=j+i){
                isprime[j] = false;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

// Sieve of Eratosthenes (Optimized)
void allprime3(int n){
    vector<bool> isprime(n+1, true);
    for(int i = 2; i<=n; i++){
        if(isprime[i]){
            cout<<i<<" ";
            for(int j = i*i; j<=n; j=j+i){
                isprime[j]=false;
            }
        }
    }
    cout<<"\n";
}
int main(){

    // Find the all prime number smaller than or equal to n
    int n;
    cin>>n;
    // naive solution
    allprime1(n);
    // Efficient solution  (Sieve of Eratosthenes)
    allprime2(n);
    // Optimized sieve of Eratosthenes
    allprime3(n);


    return 0;
}