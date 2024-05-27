#include<bits/stdc++.h>
using namespace std;

int digitsum(int n){
    if(n<10){
        return n;
    }
    int lastdigit = n%10;
    return lastdigit + digitsum(n/10);
}
int main(){

    // Write a recursive function to find the sum of alldigits of a number
    int n;
    cin>>n;
    cout<<digitsum(n)<<"\n";

    return 0;
}