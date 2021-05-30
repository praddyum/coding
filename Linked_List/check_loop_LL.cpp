//Check a LL is null terminated or cyclic
//Idea 2 pointers(p & q) with steps 1 and 2 at a time. Loop till they don't fall on each other also if pointer == NULL.

//Algo

/*

void check(node*head){

    if(head==NULL){
        cout<<"It's empty LL";
        return;
    }
    
    node*p; node*q;
    p=head; q=head;
    int flg=0;

    while(p && p->next){
        
        p=p->next->next;
        q=q->next;

        if(p==q){
            cout<<"LL has loop";
            flg==1;
            return;
        }
    }

    cout<<"LL is NULL terminated";
}
*/