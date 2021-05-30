//Now the need is to insert an element in sorted(ascending) LL.

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


node * insort(node * head,int data){
    node * tmp=create(data);
    if(head==NULL or head->data>data){
        tmp->next=head;
        head=tmp;
        return head;
    }

    node * iter=head;
    while(iter->next and iter->next->data<data){
        iter=iter->next;
    }

    tmp->next=iter->next;
    iter->next=tmp;
    display(head);

    return head;
}

int main(){
    node * head=NULL;
    cout<<"List before deletion: "<<endl;

    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,6);

    head=insort(head,5);

    return 0;
}