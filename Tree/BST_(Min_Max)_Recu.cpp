#include<bits/stdc++.h>
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

int minsearch(node * root){
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    return minsearch(root->left);
}

int maxsearch(node * root){
    if(root==NULL){
        return -1;
    }
    if(root->right==NULL){
        return root->data;
    }
    return maxsearch(root->right);
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
    
    cout<<"Minimum: "<<minsearch(root);
    cout<<"\nMaximum: "<<maxsearch(root);

    return 0;

}