//Program to recursively delete or insert value at specific positions in linkedlist.

#include<bits/stdc++.h>
using namespace std;

//Linkedlist Structure
struct node{
	int data;
	node * next;
};

//LL Create function
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

//LL Print function
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

//Insert element Recursively
node *insert(node * head){
    return head;
}

//Delete element Recursively
node *deletel(node * head,int pos){
    return head;
}

int main(){
    	
	node *head=NULL;
	int op1;
	char op;
	
	
	do{
	cout<<"Choose one:\n\t1) Create LL\n\t2) Print LL\n\t3) Insert\n\t4) Delete"<<endl;
	cout<<"Input: ";
	cin>>op1;
	
	switch(op1){
		
				//Create a LL
		case 1: head=createll(head);
				break;

				//Print element of LL
		case 2: printing(head);
				break;

				//Insert element to LL
		case 3: head=insert(head);
		        break;

				//Delete element from LL
		case 4: cout<<"Input the index: ";
                int pos;
                cin>>pos;
                head=deletel(head,pos);
				break;

		default : cout<<"Invalid Input"<<endl;
	}
		cout<<"\nWanna go to main menu (Y/N): ";
		cin>>op;
	}while(op=='Y' || op=='y');
	
    return 0;
    
}
