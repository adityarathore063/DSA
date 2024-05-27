#include<bits/stdc++.h>
using namespace std;

// Iterative solution(best solution)
bool subsequence(string &s1, string &s2){
    int i = 0, j = 0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j==s2.length()){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    // Check if a string is subsequence of othre string
    string s1, s2;
    cin>>s1>>s2;
    cout<<subsequence(s1, s2)<<"\n";
    return 0;
}