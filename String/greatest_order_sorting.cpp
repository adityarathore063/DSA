#include<bits/stdc++.h>
using namespace std;

int main(){

    // Form the greatest number using the given numeric string
    string s;
    cin>>s;
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<"\n";

    return 0;
}