#include<bits/stdc++.h>
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

void iterativeInorder(node *root){
    stack<node*>st;
    node *curr = root;
    while(curr!=NULL or st.empty()==false){
        while(curr!=NULL){
            st.push(curr);
            curr =curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
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

    iterativeInorder(root);

    return 0;
}