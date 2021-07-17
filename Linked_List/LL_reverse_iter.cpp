//Reverse a singly linked list

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

void display(node * head){
    node * tmp=head;
    while(tmp){
        cout<<tmp->data<<"->";
        tmp=tmp->next;
    }
}

node * reverse(node * head){
    if(head==NULL)
        return head;
    
    node *p,*c,*n;
    p=NULL;
    c=n=head;
    while(n){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
    return head;

}

int main(){

    node * head=NULL;
    //1->2->3->4->5
    head=insert(head,5);
    head=insert(head,4);
    head=insert(head,3);
    head=insert(head,2);
    head=insert(head,1);

    cout<<"Before reversing: "; display(head);
    head=reverse(head);
    cout<<"\nAfter reversing: "; display(head);
    return 0;
}
