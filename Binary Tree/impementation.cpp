#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *left, *right;
    int key;
    node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};
int main()
{

    //Implementation of Binary Tree
    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->left->right->right = new node(80);
    root->right = new node(30);
    root->right->right = new node(60);

    return 0;
}