#include<bits/stdc++.h>
using namespace std;


bool palindrome(int n){
    int rev = 0;
    int temp = n;
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n/=10;
    }
    if(rev==temp){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    // check the given number is palindrome or not
    int n;
    cin>>n;
    cout<<palindrome(n)<<"\n";


    return 0;
}