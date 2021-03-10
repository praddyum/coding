#include <bits/stdc++.h>
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

//LL Insert function
node *insert(node * head){

	char op;
	int op1,val;

	do{
		cout<<"\n";
		printing(head);
		cout<<"\n\nChoose one:\n\t1) Starting \n\t2) Specific Position\n\t3) Ending"<<endl;
		cout<<"Input: ";
		cin>>op1;
		node * ptr=new node;
		cout<<"Input Value: ";
		cin>>ptr->data;
		ptr->next=NULL;
		
		if(op1==1){
			if(head==NULL){
				head=ptr;
			}
			else{
				ptr->next=head;
				head=ptr;
			}
		}
		else if(op1==2){
			int pos,count=0;
			cout<<"Input position[ Use '0' Indexing]: ";
			cin>>pos;
			node * temp =head;

			if(pos==0){
				ptr->next=head;
				head=ptr;
			}

			while(temp!=NULL && count<pos-1){
				temp=temp->next;
				count++;
			}
			if(temp!=NULL){
				ptr->next=temp->next;
				temp->next=ptr;
			}

			
		}
		else if(op1==3){
			if(head==NULL){
				head=ptr;
			}
			else{
				node * tail=head;
				while(tail->next!=NULL){
					tail=tail->next;
				}
				tail->next=ptr;
			}
		}
		else{
			cout<<"Invalid Option"<<endl;
		}

		cout<<"\nWanna Insert more(Y/N): ";
		cin>>op;
	}while(op=='y' || op=='Y');
	
	return head;
}

//LL Deletion function
node *deletel(node * head){
	char op;
	int op1;

	do{
		cout<<"\n";
		printing(head);
		cout<<"\n\nChoose one:\n\t1) Starting \n\t2) Specific Position\n\t3) Ending"<<endl;
		cout<<"Input: ";
		cin>>op1;
		node * delp=head;
		if(op1==1){
			if(head==NULL){
				cout<<"LL is already empty";
			}
			else{
				
				head=head->next;
				free(delp);
			}
		}
		else if(op1==2){
			int ch,ind=0;
			cout<<"Position(Use '0' Indexing): ";
			cin>>ch;

			node *b_del=head;
			node *delp=NULL;

			if(ch==0){
				delp=b_del;
				head=head->next;
				free(delp);
			}

			while(b_del->next!=NULL && ind<ch-1){
				b_del=b_del->next;
				ind++;
			}
			if(b_del->next!=NULL){
				delp=b_del->next;
				b_del->next=b_del->next->next;
				free(delp);
			}
		}
		else if(op1==3){
			node* b_del=head;
			while(b_del->next->next!=NULL){
				b_del=b_del->next;
			}
			delp=b_del->next;
			b_del->next=NULL;
			free(delp);
		}
		else{
			cout<<"Invalid Option"<<endl;
		}

		cout<<"\nWanna Delete more(Y/N): ";
		cin>>op;
	}while(op=='y' || op=='Y');
	
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
		case 4: head=deletel(head);
				break;

		default : cout<<"Invalid Input"<<endl;
	}
		cout<<"\nWanna go to main menu (Y/N): ";
		cin>>op;
	}while(op=='Y' || op=='y');
	return 0;
}
