#include<bits/stdc++.h>
using namespace std;

void power_set(string s){
    int n = s.length();
    int powsize = pow(2,n);
    for(int counter = 0; counter<powsize; counter++){
        for(int i = 0; i<n; i++){
            if((counter&(1<<i))!=0){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}
int main(){

    // power set using bitwise oprators
    string s;
    cin>>s;
    power_set(s);
    return 0;
}