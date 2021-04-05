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
    node * temp =root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int maxsearch(node * root){
    if(root==NULL){
        return -1;
    }
    node * temp =root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
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