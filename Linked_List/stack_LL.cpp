//Stack implementation from LL

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

void display(node * head){
    if(head==NULL){
        cout<<"\nEmpth Stack";
    }
    else{
        node * tmp=head;
        while(tmp){
            cout<<tmp->data<<"->";
            tmp=tmp->next;
        }
    }
}

node * insert(node * head,int data){
    if(head==NULL)
        head=createnode(data);
    
    else{
        node * tmp=createnode(data);
        tmp->next=head;
        head=tmp;
    }
    cout<<"\nCurrent Status:"<<endl;
    display(head);
    return head;
}

node * delet(node * head){
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
        return NULL;
    }
    else{
        node * tmp=head;
        head=head->next;
        free(tmp);
    }
    cout<<"\nCurrent Status:"<<endl;
    display(head);
    return head;
}

int main(){
    node *head=NULL;
    char ans='y';
    do{
        int opt;
        cout<<"Select: \n1) Insert\n2) Delete\n3) View"<<endl;
        cin>>opt;
        
        switch(opt){
            case 1: int a; cin>>a;
                    head=insert(head,a);
                    break;

            case 2: head=delet(head);
                    break;

            case 3: display(head);
                    break;
            
            default: cout<<"Invalid Value"<<endl;

        }

        cout<<"\nWanna do more (y/n): "<<endl;
        cin>>ans;
    }while(ans=='y');

}