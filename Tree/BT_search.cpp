#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

bool search(node * root,int data){
    if(root==NULL)
        return false;
    if(root->data==data)
        return true;

    if(search(root->left,data) || search(root->right,data))
        return true;
    else    
        return false;
}

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

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,6);
    root=insert(root,10);
    root=insert(root,11);
    cout<<search(root,6);
    return 0;
}

