//Idea is to calculate number of nodes

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

int calc_size(node * root){
    if(root==NULL){
        return 0;
    }
    return calc_size(root->left) + calc_size(root->right) +1 ;
}

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,6);
    root=insert(root,10);
    root=insert(root,11);
    root=insert(root,4);
    cout<<"Size(No. of nodes): "<<calc_size(root)<<endl;
    return 0;
}

