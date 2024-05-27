#include<bits/stdc++.h>
using namespace std;

void permute(string s, int i){
    if(i==s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j = i; j<s.length(); j++){
        swap(s[i], s[j]);
        permute(s, i+1);
        swap(s[j], s[i]);
    }

}
int main(){

    // Print the all permutation of a string
    string s;
    cin>>s;
    permute(s, 0);

    return 0;
}