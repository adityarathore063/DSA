#include<bits/stdc++.h>
using namespace std;

// Naive Method // Tc = 0(n) and Aux. space = 0(n)
bool isPal(string &s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    return(rev==s);
}
// Efficient Method // Tc = O(n) and Aux. space = O(1)
bool isPal1(string &s){
    int low = 0;
    int high = s.size()-1;
    while(low<high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main(){

    // check the given string is palindrome or not
    string s;
    cin>>s;
    cout<<isPal(s)<<"\n";
    cout<<isPal1(s)<<"\n";
    return 0;
}