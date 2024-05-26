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

// Naive way
Node *deletehead(Node *head){
    if(head==NULL)
        return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}

// Efficent way
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
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    // Delete the head of circular linked list
    // Node *new_head = deletehead(head);
    // printList(new_head);
    Node *new_head = deleteHead(head);
    printList(new_head);

    return 0;
}