#include<bits/stdc++.h>
using namespace std;

// creating linked list
struct Node
{
    /* data */
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};

// traversing 
void printlist(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<"\n";
}
//traversing another example
void printlist1(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

// traversing recursively
void rprint(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rprint(head->next);
}
int main(){
    // creating Linked List 
    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next=new Node(30);
    // head->next->next->next=new Node(40);
    // Traversing in a singly Linked List
    // printlist(head);

    // Another Example
    // Node *head = new Node(10);
    // printlist(head);
    // printlist(head);

    // Printing using recursion
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    rprint(head);

    return 0;
}