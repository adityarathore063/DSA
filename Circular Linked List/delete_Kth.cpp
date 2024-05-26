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

// Traversal Method 1
void printList(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    for(Node *curr = head->next; curr!=head; curr=curr->next){
        cout<<curr->data<<" ";
    }
    cout<<"\n";
}

Node *deleteHead(Node *head){
    if(head==NULL)
        return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

// Code 
Node *deleteKth(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return deleteHead(head);
    }
    Node *curr = head;
    for(int i = 0; i<k-2; i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    // Delete Kth node of circular linked list
    Node *new_head = deleteKth(head, 3);
    printList(new_head);
    return 0;
}