#include<bits/stdc++.h>
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

// void iterativePreorder(node *root){
//     if(root==NULL)
//     return;
//     stack<node*>st;
//     st.push(root);
//     while(st.empty()==false){
//         node *curr = st.top();
//         cout<<curr->key<<" ";
//         st.pop();
//         if(curr->right!=NULL)st.push(curr->right);
//         if(curr->left!=NULL)st.push(curr->left);
//     }
// }

// Space Optimized
void iterativePreoredr_(node *root){
    if(root==NULL)
    return;
    stack<node*>st;
    node *curr = root;
    while(curr!=NULL or st.empty()==false){
        while(curr!=NULL){
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
            st.push(curr->right);
            curr = curr->left;
        }
        if(st.empty()==false){
            curr = st.top();
            st.pop();
        }
    }
}
int main(){

    node *root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->left->right->right = new node(80);
    root->right = new node(30);
    root->right->right = new node(60);

    // iterativePreorder(root);
    iterativePreoredr_(root);
    return 0;
}