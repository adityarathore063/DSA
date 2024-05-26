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
Node *insertBegin(Node *head, int data){
    Node *temp = new Node(data);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    Node *curr = head;
    while(curr->next != head)
        curr=curr->next;
    curr->next = temp;
    temp->next = head;
    return temp;
}

// Efficient Approach
Node *insertBegin1(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    // Insert at begin of circular linked list
    // Node *new_head = insertBegin(head , 5);
    // printList(new_head);
    Node *new_head = insertBegin(head , 5);
    printList(new_head);

    return 0;
}