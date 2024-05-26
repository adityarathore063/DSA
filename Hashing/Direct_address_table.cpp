#include<bits/stdc++.h>
using namespace std;

struct dat{
    int table[1000] = {0};
    void insert(int i){
        table[i]=1;
    }
    void del(int i){
        table[i]= 0;
    }
    int search(int i){
        return table[i];
    }
};
int main(){

    // Direct Address table
    dat d;
    d.insert(10);
    d.insert(20);
    d.insert(119);
    cout<<d.search(10)<<endl;
    cout<<d.search(20)<<endl;
    d.del(119);
    cout<<d.search(119)<<endl;


    return 0;
}