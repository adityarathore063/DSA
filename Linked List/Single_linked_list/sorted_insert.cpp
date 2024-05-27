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

Node *sortedInsert(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    if(x<head->data){
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    while(curr->next!=NULL && curr->next->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Sorted insert in a linked list
    Node *new_head = sortedInsert(head, 25);
    printList(new_head);
    return 0;
}