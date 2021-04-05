/*
                        15
                     /      \
                    /        \
                   10         20
                  /  \       /  \
                 /    \     /    \
                8     12   17    25
                          /
                         /
                        16 

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

Time Complexity = O(n)
Space Complexity = O(1) //best case
                   O(n) //worst and average case
*/

#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

node * createnew(int data){

    node* newnode =new node();
    newnode->left=NULL;
    newnode->data=data;
    newnode->right=NULL;
    return newnode;
}

node * insert(node * root, int data){
    if(root==NULL){
        root=createnew(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
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
    root=insert(root, 15);
    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 8);
    root=insert(root, 12);
    root=insert(root, 17);
    root=insert(root, 25);
    root=insert(root, 16);
    
    levelorder(root);

    return 0;
}
