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

Node *insertPosition(Node *head, int x, int pos){
    Node *temp = new Node(x);
    if(pos == 1){
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for(int i = 1; i<=pos-2 && curr!=NULL; i++){
        curr = curr->next;
    }

    if(curr==NULL){
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"\n";
        curr = curr->next;
    }
}

int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Insert at given position
    Node *new_head = insertPosition(head, 50, 1);
    printList(new_head);
    return 0;
}