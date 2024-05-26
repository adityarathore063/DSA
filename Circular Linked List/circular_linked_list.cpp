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

// travretsal method 2
void print(Node *head){
    if(head == NULL)
        return;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
    cout<<"\n";
}
int main(){

    // Implementation and traversal of circular linked list
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    printList(head);
    print(head);

    return 0;
}