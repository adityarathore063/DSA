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

// naive solution
void printNthFromEnd(Node *head, int n)
{
    int len = 0;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        len++;
    }
    if (len < n)
    {
        return;
    }
    Node *curr = head;
    for (int i = 1; i < len - n + 1; i++)
    {
        curr = curr->next;
    }
    cout << curr->data << "\n";
}

// Efficient solution (using two poninter)
void printNthFromEnd1(Node *head, int n)
{
    if (head == NULL)
    {
        return;
    }
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
        {
            return;
        }
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data << "\n";
}
int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Find the nth Node from the end
    printNthFromEnd(head, 2);
    printNthFromEnd1(head, 2);
    return 0;
}