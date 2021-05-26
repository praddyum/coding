
#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
};

node * create(int a){
    node* datanode = new node;
    datanode->data=a;
    datanode->left=NULL;
    datanode->right=NULL;
    return datanode;
}

node * insert(node * root,int a){
    if(root==NULL){
        root= create(a);
        return root;
    }

    else if(a<=root->data){
        root->left=insert(root->left,a);
    }
    else{
        root->right=insert(root->right,a);
    }
    return root;
}


int count(node * root){
    int coun=0;
    if(root==NULL)
        return coun;
    
    queue<node *>q;
    q.push(root);
    
    while(!q.empty()){
        node * temp=q.front();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        
        if(!(temp->left) && !(temp->right))
            coun++;

        q.pop();
    }
    return coun;

}

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,8);
    root=insert(root,12);
    root=insert(root,6);
    root=insert(root,11);
    root=insert(root,13);
    cout<<count(root);
    return 0;
}