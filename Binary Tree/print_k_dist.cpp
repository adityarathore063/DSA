#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        node *left;
        node *right;
        int key;
        node(int k){
            key = k;
            left=right=NULL;
        }

};

void printKDist(node *root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->key<<" ";
    }
    else{
        printKDist(root->left, k-1);
        printKDist(root->right, k-1);
    }
}
int main(){

    node *root = new node(10);
    root->left =  new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);

    int k = 2;

    printKDist(root, k);
    return 0;
}