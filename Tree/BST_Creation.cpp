#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

node * createnode(int data){

    node * newnode= new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

node * insert(node * root,int data){
    if(root==NULL){
        root=createnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else {
        root->right=insert(root->right,data);
    }
    return root;
}

bool lookup(node * root, int data){
    if(root==NULL){
        return false;
    }
    else if(data==root->data){
        return true;
    }
    else if(data<=root->data){
        return lookup(root->left,data);
    }
    else{
        return lookup(root->right,data);
    }
}

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,6);
    root=insert(root,10);
    root=insert(root,11);
    cout<<lookup(root,1);
    return 0;
}

