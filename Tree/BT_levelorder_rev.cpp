/*
                        15
                     /      \
                    /        \
                   10         20
                  /  \       /  \
                 /    \     /    \
                8     12   17    25
                        
Output: 8 12 17 25 10 20 15

Idea: We'll use a stack to push data 15->20->10->25->17->12->8
For determining what to push at right time we'll use a queue
*/


#include<bits/stdc++.h>
#include<queue>
#include<stack>
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

void revlevelorder(node *root){
    if(root==NULL){
        return;
    }
    queue<node *> q;
    stack<node *> s;

    q.push(root);

    while(!q.empty()){
        node * temp=q.front();
        s.push(temp);
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
        q.pop();
    }

    while(!s.empty()){
        node * temp=s.top();
        cout<<temp->data<<" ";
        s.pop();
    }
}

int main(){
    
    node * root=NULL;
    root=insert(root, 15);
    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 8);
    root=insert(root, 12);
    root=insert(root, 17);
    root=insert(root, 25);
    revlevelorder(root);

    return 0;
}

