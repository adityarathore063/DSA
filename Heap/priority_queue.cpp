#include <iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue <int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    

        priority_queue <int,vector<int>,greater<int>> p;
    p.push(10);
    p.push(15);
    p.push(5);
    cout<<p.size()<<" ";
    cout<<p.top()<<" ";
    while(p.empty()==false){
        cout<<p.top()<<" ";
        p.pop();
    }

    return 0;
}