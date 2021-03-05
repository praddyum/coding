#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node * next;
};

node * createll(node * head){
	
	char op='Y';

	while(op=='Y' || op=='y'){
		node * ptr=new node;
		cout<<"Input Value: ";
		cin>>ptr->data;
		ptr->next=NULL;	

		if(head==NULL){
			head=ptr;
		}

		else{
			node *tail=head;
			while(tail->next!=NULL){
				tail=tail->next;
			}
			tail->next=ptr;
		}
		cout<<"Wanna Add more (Y/N): ";
		cin>>op;
	}
	return head;
}

void printing(node * head){
	node * ptr=head;

	if(ptr==NULL){
		cout<<"It's an empty Linked List"<<endl;
		return;
	}

	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL";
}

int main(){
	
	node *head=NULL;
	int op1;
	char op;
	
	
	do{
	cout<<"Choose one:\n\t1) Create LL\n\t2) Print LL"<<endl;
	cout<<"Input: ";
	cin>>op1;
	
	switch(op1){
		
				//Create a LL
		case 1: head=createll(head);
				break;

				//Print element of LL
		case 2: printing(head);
				break;

		default : cout<<"Invalid Input"<<endl;
	}
		cout<<"\nWanna go to main menu (Y/N): ";
		cin>>op;
	}while(op=='Y' || op=='y');
	return 0;
}
