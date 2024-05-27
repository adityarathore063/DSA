#include<bits/stdc++.h>
using namespace std;

int rope_cut(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(rope_cut(n-a, a, b, c),max(rope_cut(n-b, a, b, c), rope_cut(n-c, a, b, c)));
    if(res==-1){
        return -1;
    }
    return res+1;
}
int main(){

    // Given a rope of length n you need to find maximum no of pieces you can make
    // such that length of every piece is in set {a, b, c} for given three values a, b, c
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    cout<<rope_cut(n, a, b, c);

    return 0;
}