#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int countdigits2(int n){
    if(n==0){
        return 0;
    }
    return 1 + countdigits2(n/10);

}

int countdigits3(int n){
    int ans = floor(log10(n) + 1);
    return ans;
}
int main(){

    // Find the no of digit in a number
    int a;
    cin>>a;
    // iterative solution
    cout<<countdigits(a)<<"\n";
    // Recursive solution
    cout<<countdigits2(a)<<"\n";
    //Logarithmic Solution
    cout<<countdigits3(a)<<"\n";


    return 0;
}