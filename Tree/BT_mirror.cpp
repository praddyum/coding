#include<bits/stdc++.h>
#include<queue>

using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};


node * createnode(int data){
    node * newnode=new node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

node * insert(node * root,int data){
    if(root==NULL){
        root=createnode(data);
        return root;
    }
    if(data<=root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);    
    return root;
}

node * mirror(node*root){
    if(root==NULL)
        return NULL;
    
    node * left= mirror(root->left);
    node * right=mirror(root->right);
    root->left=right;
    root->right=left;

    return root;
}

void levelorder(node * root){
    if(root==NULL){
        return;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        
        node * temp=q.front();      //To get the fron value of queue
        
        cout<<temp->data<<" ";      //Printing the data
        
        if(temp->left!=NULL)        //Checking for children and push
            q.push(temp->left);
        
        if(temp->right!=NULL)
            q.push(temp->right);
        
        q.pop();                    //deleting the front value to clear way for next value
    }
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
    cout<<"\nBefore: ";
    levelorder(root);
    root= mirror(root);
    cout<<"\nAfter: ";
    levelorder(root);
    return 0;
}