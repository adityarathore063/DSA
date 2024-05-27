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

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"\n";
        curr = curr->next;
    }
}

// Naive solution
void printMiddle(Node *head){
    if(head == NULL){
        return ;
    }
    int count = 0;
    Node *curr = head;
    while(curr!=NULL){
        count++;
        curr= curr->next;
    }
    curr = head;
    for(int i = 0; i<count/2; i++){
        curr = curr->next;
    }
    cout<<curr->data<<"\n";
}

// Efficient solution
void printMiddle2(Node *head){
    Node *slow = head, *fast = head;
    if(head==NULL){
        return;
    }

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<"\n";
}
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // head->next->next->next = new Node(40);

    // Middle of Linked List
    printMiddle(head);
    printMiddle2(head);

    return 0;
}