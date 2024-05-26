#include<bits/stdc++.h>
using namespace std;

struct MyHash{
    int bucket;
    list<int> *table;
    MyHash(int b){
        bucket = b;
        table = new list<int> [bucket];
    }
    void insert(int key){
        int i = key % bucket;
        table[i].push_back(key);
    }
    void remove(int key){
        int i = key % bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key % bucket;
        for(auto x : table[i])
            if(x==key)
                return true;
        return false;
    }
};
int main(){

    // C++ program to demonstrate implementation of our 
    // own hash table with chaining for collision detection 
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);


    return 0;
}