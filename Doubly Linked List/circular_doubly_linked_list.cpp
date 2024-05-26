#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev, *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

// traversal
void print(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    for(Node *curr = head->next; curr!=head; curr = curr->next){
        cout<<curr->data<<" ";
    }
    cout<<"\n";
}

// insert at begin
Node *insertbegin(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else{
        head->prev->next = temp;
        temp->next = head;
        head->prev = temp;
        return temp;
    }
}

// Insert at end
Node *insertend(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else{
        head->prev->next = temp;
        temp->next = head;
        head->prev = temp;
        return head;
    }
}

int main()
{

    // circular doubly linked list
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = head;
    head->prev = temp2;
    print(head);
    // Node *new_head = insertbegin(head, 5);
    // print(new_head);
    Node *new_head = insertend(head, 5);
    print(new_head);
    
    return 0;
}