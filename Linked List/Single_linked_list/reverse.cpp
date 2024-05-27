#include<bits/stdc++.h>
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

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"\n";
        curr = curr->next;
    }
}
 // *************** Iterative Approcah ***************
 // Naive Solution
Node *reverse1(Node *head){
    vector<int>v;
    for(Node *curr = head; curr!=NULL; curr = curr->next){
        v.push_back(curr->data);
    }

    for(Node *curr = head; curr!=NULL; curr = curr->next){
        curr->data = v.back();
        v.pop_back();
    }
    return head;
}

// Efficient solution
Node *reverse2(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

/// ************** Recursive Approach **************
/// Method 1
Node *reverse3(Node *head){
    if(head ==NULL || head->next == NULL){
        return head;
    }
    Node *rest_head = reverse3(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

// Method 2
Node *reverse4(Node *curr, Node *prev){
    if(curr==NULL){
        return prev;
    }
    Node *next = curr->next;
    curr->next = prev;
    return reverse4(next, curr);
}
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Reverse a linked List
    // Node *new_head = reverse1(head);
    // printList(new_head);

    // Node *new_head = reverse2(head);
    // printList(new_head);

    // Node *new_head = reverse3(head);
    // printList(new_head);

    Node *new_head = reverse4(head, NULL);
    printList(new_head);


    return 0;
}