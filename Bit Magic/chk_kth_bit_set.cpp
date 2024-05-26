#include<bits/stdc++.h>
using namespace std;

void kth_bit1(int n, int k){
    if(n&(1<<k-1)!=0){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}

// 2nd way
void kth_bit2(int n, int k){
    if(((n>>(k-1))&1)==1){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}
int main(){

    // Check the kth bit is set or not
    int n, k;
    cin>>n>>k;
    // 1st way
    kth_bit1(n, k);
    // 2nd way
    kth_bit2(n, k);



    return 0;
}