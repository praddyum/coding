//Program to find Kth node from the end in a ll
// Solution could be taking two pointers(p & q) initially both pointing to head and then until unless p moves k-1 q will not move. All the movements will be one step at a time.

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * next;
};

node * createnode(int data){
    node * newnode = new node;
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

node * insert(node * head,int data){
    if(head==NULL)
        head=createnode(data);
    
    else{
        node * tmp=createnode(data);
        tmp->next=head;
        head=tmp;
    }
    return head;
}

int find(node *head,int k){
    node* p=head;
    node* q=head;
    int count=0;
    while(p->next!=NULL){
        if(count>=k-1){
            q=q->next;
        }
        p=p->next;
        count++;
    }
    if(k>(count+1) || k<=0){
        return -1;
    }
        
    else    
        return q->data;
}

int main(){

    node * head=NULL;
    //1->2->3->4->5
    head=insert(head,5);
    head=insert(head,4);
    head=insert(head,3);
    head=insert(head,2);
    head=insert(head,1);

    cout<<find(head,2);

    return 0;
}
