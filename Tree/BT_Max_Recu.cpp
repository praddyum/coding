#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

int maxser(node * root){
    if(root==NULL)
        return -1;
        
    int maxl,maxr,maxc;
    maxc=root->data;
    maxl=maxser(root->left);
    maxr=maxser(root->right);
    
    //Comparison algo
    int big = maxl>maxr ? maxl : maxr;
    big = big>maxc ? big : maxc;

    return big;
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
    cout<<maxser(root);
    return 0;
}

