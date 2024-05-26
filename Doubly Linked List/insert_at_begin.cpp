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

/// Insert at begin
Node *inserBegin(Node *head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    return temp;
}
int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // Insert at the begining of DLL
    Node *new_head = inserBegin(head, 5);
    printlist(new_head);
    return 0;
}