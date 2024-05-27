#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){

    // stack in stl
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<"\n";
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    cout<<s.empty()<<"\n";
    s.push(30);
    while(s.empty()==false){
        cout<<s.top()<<"\n";
        s.pop();
    }
    cout<<s.empty()<<"\n";

    return 0;
}