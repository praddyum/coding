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

int maxsumlevel(node * root){
    int level=0;
    if(root==NULL)
        return -1;
    
    if(!(root->left) && !(root->right))
        return level;

    queue<node*>q;
    q.push(root);

    int size=1,L=0,S=0;
    int sum=root->data;

    while(!q.empty()){
        if(size==0){
            size=q.size();
            L++;
            if(sum<S){
                sum=S;
                level=L;
                S=0;
            }
        }
        node * temp=q.front();
        if(temp->left){
            q.push(temp->left);
            S+=temp->left->data;
        }
        if(temp->right){
            q.push(temp->right);
            S+=temp->right->data;
        }
        size--;
        q.pop();
    }

    return level;
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
    
    cout<<maxsumlevel(root);

    return 0;
}