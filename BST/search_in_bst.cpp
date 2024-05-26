#include<bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

// Recursive search implementation
bool search(Node *root, int x){
    if(root==NULL)
    return false;
    else if(root->key==x)
    return true;
    else if(root->key>x)
    return search(root->left,x);
    else
    return search(root->right,x);
}

// Iterative search implementation
bool search1(Node *root, int x){
    while(root!=NULL){
        if(root->key==x)
        return true;
        else if(root->key>x)
        root = root->left;
        else
        root = root->right;
    }
    return false;
}
int main(){

	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

    if(search(root,18)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

    if(search1(root,80)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}