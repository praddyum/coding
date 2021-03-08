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
			int pos,count=1,st=0,flg=3;
			cout<<"Input position: ";
			cin>>pos;
			node * temp =head;

			//Edge Case with pos=1 
			if(pos==1){
				ptr->next=head;
				head=ptr;
				st=1;
			}

			//edge Case with pos=2
			else if(pos==2){
				ptr->next=head->next;
				head->next=ptr;
				st=1;
			}

			//Getting at the node (pos-1)
			while(count<pos-1 && st==0){
				cout<<"Inside"<<endl;
				if(temp->next!=NULL){
					temp=temp->next;
					count++;
					flg=0;
				}
				
				//If LL ends before our required pos
				else{

					//Just before the required pos = Last node
					if(count==pos-1){
						flg=0;
					}

					//LL is too short	
					else{
						cout<<"Position out of bound";
						flg=2;
					}
					break;
				}
			}
			cout<<"Flg= "<<flg<<endl;
			if(flg==0){
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

int main(){
	
	node *head=NULL;
	int op1;
	char op;
	
	
	do{
	cout<<"Choose one:\n\t1) Create LL\n\t2) Print LL\n\t3) Insert"<<endl;
	cout<<"Input: ";
	cin>>op1;
	
	switch(op1){
		
				//Create a LL
		case 1: head=createll(head);
				break;

				//Print element of LL
		case 2: printing(head);
				break;

		case 3: head=insert(head);
		        break;

		default : cout<<"Invalid Input"<<endl;
	}
		cout<<"\nWanna go to main menu (Y/N): ";
		cin>>op;
	}while(op=='Y' || op=='y');
	return 0;
}
