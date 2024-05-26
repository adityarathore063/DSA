#include<bits/stdc++.h>
using namespace std;

int bin_to_gray(int x){
    return x^(x>>1);
}
int main(){

    //convert the given x(binary) into gray code (decimal)
    int x;
    cin>>x;
    cout<<bin_to_gray(x)<<"\n";

    return 0;
}