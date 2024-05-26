#include<bits/stdc++.h>
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
void printlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "\n";
}

Node *deletelast(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        Node *curr = head;
        while(curr->next !=NULL){
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
        return head;
    }
}
int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // Delete last node of DLL
    Node *new_head = deletelast(head);
    printlist(new_head);

    return 0;
}