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

int height(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}
int main(){

    node *root = new node(10);
    root->left = new node(8);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->right->left = new node(70);

    cout<<height(root)<<"\n";

    return 0;
}