#include<bits/stdc++.h>
using namespace std;

void sub_string(string str, string curr, int index){
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    sub_string(str, curr, index+1);
    sub_string(str, curr+str[index], index+1);
}
int main(){

    // Given a string print all subsets of it (in any order);
    string str;
    cin>>str;
    sub_string(str, "", 0);


    return 0;
}