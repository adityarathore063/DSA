#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *left;
    node *right;
    int key;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void printLevel(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << (curr->key) << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}
int main()
{

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(8);
    root->left->right = new node(7);
    root->left->right->left = new node(9);
    root->left->right->right = new node(15);
    root->right->right = new node(6);

    printLevel(root);

    return 0;
}