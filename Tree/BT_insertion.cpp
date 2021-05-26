//logic is do level order traversal and add the node wherever you find left or right child NULL

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


node * adding(node * root,int data){
    //creating node
    node * temp_node= createnode(data);
    if(root==NULL){
        root=temp_node;
        return root;
    }
    //levelorder
    queue<node *> q;
    q.push(root);

    while(!q.empty()){

        node * temp= q.front();
        if(temp->left)
            q.push(temp->left);
        else{
            temp->left=temp_node;
            //while(!q.empty()) q.pop();
            return root;
        }
        if(temp->right)
            q.push(temp->right);
        else{
            temp->right=temp_node;
            //while(!q.empty()) q.pop();
            return root;
        }

        q.pop();
    }
    return root;
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
    root=insert(root,6);
    root=insert(root,10);
    root=insert(root,11);
    cout<<"Before: "<<endl;
    levelorder(root);
    root=adding(root,9);
    cout<<"\nAfter: "<<endl;
    levelorder(root);
    return 0;
}

