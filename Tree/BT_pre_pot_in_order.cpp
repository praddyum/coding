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

    [*] PreOrder  = 15 10 8 12 20 17 16 25
    [*] InOrder   =  8 10 12 15 16 17 20 25
    [*] PostOrder =  8 12 10 16 17 25 20 15

void preOrder(node * root){
    if(root == NULL)
        return;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root -> right);
}

void inOrder(node * root){
    if(root == NULL)
        return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root -> right);
}

void postOrder(node * root){
    if(root == NULL)
        return;
    
    postOrder(root->left);
    postOrder(root -> right);
    cout<<root->data<<" ";
}

Time Complexity: O(n)
Space Complexity: O(h)
                 : O(n) //Worst
                 : O(logn) //Best or Avg cases

*/