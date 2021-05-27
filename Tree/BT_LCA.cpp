//Assumption :: Either both of them already exist or none of them exist

#include<bits/stdc++.h>
#include<queue>
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

node * LCA(node * root,int a,int b){
    if(root==NULL)
        return NULL;
    
    if(root->data==a || root->data==b)
        return root;

    node * l=LCA(root->left,a,b);
    node * r=LCA(root->right,a,b);

    if(l && r)
        return root;
    if(l)
        return l;
    else
        return r;

    return root;
}

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,18);
    root=insert(root,5);
    root=insert(root,11);
    root=insert(root,16);
    root=insert(root,20);
    
    node * temp=LCA(root,16,20);
    cout<<temp->data;

    return 0;
}

