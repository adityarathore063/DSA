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

// Naive Way
Node *insertend(Node *head, int data){
    Node *temp = new Node(data);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next!=head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return head;
    }
}

// Efficient Way
Node *insertEnd(Node *head, int data){
    Node *temp = new Node(data);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    // Insert at the end of circular linked list
    // Node *new_head = insertend(head, 5);
    // printList(new_head);
    Node *new_head = insertEnd(head, 5);
    printList(new_head);

    return 0;
}