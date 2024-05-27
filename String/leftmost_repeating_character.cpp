#include<bits/stdc++.h>
using namespace std;

// Naive solution
int leftmost1(string &s){
    for(int i = 0; i<s.length(); i++){
        for(int j = i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                return i;
            }
        }
    }
    return -1;
}
// Better Appproach
int const ch = 256;
int leftmost2(string &s){
    int count[ch] = {0};
    for(int i = 0; i<s.length(); i++){
        count[s[i]]++;
    }
    for(int i = 0; i<s.length(); i++){
        if(count[s[i]]>1){
            return i;
        }
    }
    return -1;
}
// Efficient Appproach-1 (Tc = O(n) aux. space = O(1))
int leftmost3(string &s){
    int count[ch];
    for(int i = 0; i<ch; i++){
        count[i]=-1;
    }
    int res = INT_MAX;
    for(int i = 0; i<s.length(); i++){
        int x = count[s[i]];
        if(x==-1){
            count[s[i]]=i;
        }
        else{
            res = min(x,res);
        }
    }
    return (res==INT_MAX)?-1:res;
}
int main(){

    // Leftmost repeating character of a string
    string s;
    cin>>s;
    cout<<leftmost1(s)<<"\n";
    cout<<leftmost2(s)<<"\n";
    cout<<leftmost3(s)<<"\n";
    return 0;
}