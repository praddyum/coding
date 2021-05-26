//Logic is to do levelo order traversal and look for size of queue to determine level change.
//Resource: https://www.youtube.com/watch?v=2goq5ILKmpk

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


int heigh(node * root){
    int height=0;
    if(root==NULL)
        return height;
    
    queue<node *>q;
    q.push(root);
    int size=1;
    while(!q.empty()){
        node * temp=q.front();
        if(size==0){
            size=q.size();
            height++;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        size--;
        q.pop();
    }
    return height;

}

int main(){
    
    node * root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,8);
    root=insert(root,12);
    root=insert(root,6);
    cout<<heigh(root);
    return 0;
}