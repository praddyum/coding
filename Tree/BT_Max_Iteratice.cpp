#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

int maxser(node * root){
    queue<node*> q;
    int max=INT_MIN;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        if(temp->data > max){
            max=temp->data;
        }

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        q.pop();
    }
    return max;
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

