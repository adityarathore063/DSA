#include<bits/stdc++.h>
using namespace std;

void func1(int n){
    if(n==0){
        return;
    }
    func1(n-1);
    cout<<n<<" ";
}
int main(){

    // Print all the numbers from 1 to n
    // TC = 0(n) and Aux. space = 0(n)
    int n;
    cin>>n;
    func1(n);


    return 0;
}