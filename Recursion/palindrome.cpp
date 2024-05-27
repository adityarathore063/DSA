#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string &str, int start, int end){
    if(start>=end){
        return true;
    }
    return ((str[start]==str[end]) && ispalindrome(str, start+1, end-1));
}
int main(){

    // check the given string is palindrome or not
    string s;
    cin>>s;
    cout<<ispalindrome(s, 0, s.length()-1)<<"\n";

    return 0;
}