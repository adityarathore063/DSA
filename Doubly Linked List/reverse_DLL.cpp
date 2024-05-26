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

Node *reverse_DLL(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev = NULL, *curr = head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;

    }
    return prev->prev;
}
int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // Reverse DLL
    Node *new_head = reverse_DLL(head);
    printlist(new_head);

    return 0;
}