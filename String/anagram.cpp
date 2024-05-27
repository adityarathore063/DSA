#include<bits/stdc++.h>
using namespace std;

// Naive solution (Tc = O(nlongn))
bool anagram1(string &s1, string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1==s2);
}
// Efficient solution (Tc = O(n))
bool anagram2(string &s1, string &s2){
    const int ch = 256;
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[ch] = {0};
    for(int i = 0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i<ch; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){

    //chechk for anagram for two given string
    string s1, s2;
    cin>>s1>>s2;
    cout<<anagram1(s1,s2)<<"\n";
    cout<<anagram2(s1, s2)<<"\n";
    return 0;
}