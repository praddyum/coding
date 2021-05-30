//Check LL has loop, if found ctell the starting node.
//Solution will be to first determine loop using floyd method then initialize slow ptr to head and move fase and slow ptr 1 step at a time.

/*

node * findfir(node * head){
    
    if(head==NULL){
        cout<<"Empty LL";
        return NULL;
    }

    //Logic to check the loop
    node* fast,slow;
    fast=head; slow=head;
    int loop=0;

    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            loop=1;
            break;
        }
    }

    if(loop==1){
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    return NULL;
}
*/