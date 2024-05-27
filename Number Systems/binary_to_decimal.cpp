#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans = 0, base = 1;
    while(n>0){
        int lastdigit = n%10;
        ans = ans + (lastdigit*base);
        n = n/10;
        base=base*2;

    }
    cout<<ans<<"\n";

    return 0;
}