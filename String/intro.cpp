#include<bits/stdc++.h>
using namespace std;

int main(){

    // print the frequency of character in sorted order im an string of lowercase aplhabet
    string s;
    cin>>s;
    int count[26] = {0};
    for(int i = 0; i<s.size(); i++){
        count[s[i]-'a']++;
    }
    for(int i = 0; i<26; i++){
        if(count[i]>0){
            cout<<char(i+'a')<<" ";
            cout<<count[i]<<"\n";
        }
    }

    return 0;
}