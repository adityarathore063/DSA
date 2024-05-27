#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


Node *insertBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next=head;
    return temp;
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"\n";
        curr = curr->next;
    }
}
int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Insertion at the beggining
    Node *new_head = insertBegin(head, 5);
    printList(new_head);

    return 0;
}