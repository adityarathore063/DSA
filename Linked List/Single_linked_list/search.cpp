#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int x){
            data = x;
            next = NULL;
        }
};

// Iterative Search 
int iSearch(Node *head, int x){
    int pos = 1;
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

// Recursive Search
int rSearch(Node *head, int x){
    if(head == NULL){
        return -1;
    }
    if(head->data==x){
        return 1;
    }
    else{
        int res = rSearch(head->next, x);
        if(res==-1)
            return -1;
        else
            return res+1;
    }
}
int main(){

    Node *head = new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);

    // searching (Iterative)
    cout<<iSearch(head, 5)<<"\n";
    cout<<iSearch(head, 15)<<"\n";
    cout<<iSearch(head, 30)<<"\n";

    // searching (Recursive)
    cout<<rSearch(head, 5)<<"\n";
    cout<<rSearch(head, 15)<<"\n";
    cout<<rSearch(head, 30)<<"\n";
 
    return 0;
}