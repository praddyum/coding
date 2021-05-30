#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * next;

};


node * create(int data){
    node * newnode=new node;
    (*newnode).data=data;
    (*newnode).next=NULL;
    return newnode;
}

node *insert(node * head,int data){
    if(head==NULL)
        head=create(data);
    
    else{
        node * tmp=head;

        //traverse to last node
        while(tmp->next){
            tmp=tmp->next;
        }

        //Assign the new value
        tmp->next=create(data);
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

node * delet(node *head){
    
    if(head==NULL)
        return NULL;
    
    node * tmp=head;
    while(tmp){
        node * next=tmp->next;
        free(tmp);
        tmp=next;
    }

    head=NULL;

    return head;
}

int main(){

    node * head=NULL;
    cout<<"List before deletion: "<<endl;

    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);

    display(head);

    cout<<"\nList after deletion: "<<endl;

    head=delet(head);

    display(head);
    
    cout<<endl;

    return 0;
}