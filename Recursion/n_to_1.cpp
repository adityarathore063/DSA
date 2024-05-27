#include<bits/stdc++.h>
using namespace std;

void func1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    func1(n-1);
}
int main(){

    // Print the all numbers from n to 1
    // TC = 0(n) and Aux. space = 0(n)
    int n;
    cin>>n;
    func1(n);


    return 0;
}