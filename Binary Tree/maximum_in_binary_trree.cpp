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

int getMax(node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(getMax(root->left), getMax(root->right)));
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

    cout << getMax(root) << "\n";

    return 0;
}