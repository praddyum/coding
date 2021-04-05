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

View : https://www.youtube.com/watch?v=_pnqMz5nrRs

Findheight (root){
    if(root==NULL){
        return -1;
    }

    int leftheight,rightheight;
    leftheight= Findheight(root->left);
    rightheight= Findheight(root->right);

    return max(leftheight,rightheight) +1 ;
}

Time Complexity = O(n)

*/

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

int height(node * root){
    if(root==NULL){
        return -1;
    }
    return max(height(root->left),height(root->right))+1;
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
    
    cout<<"Height= "<<height(root);

    return 0;

}

