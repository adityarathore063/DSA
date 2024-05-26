#include<bits/stdc++.h>
using namespace std;

int gray_to_binary(int x){
    int res = 0;
    while(x>0){
        res = res^x;
        x = x>>1;
    }
    return res;
}
int main(){

    int x;
    cin>>x;
    cout<<gray_to_binary(x)<<"\n";
    return 0;
}