//A linkedlist whose last node could point to NULL(Snake) or to it's previous element(Snail). Given head determine it's snake or snail
// Sol: Take two pointers and check for next addresses

/*

void check(node * head){
    if(head == NULL){
        cout<<"Empty LL";
        return;
    }

    node * f; node * b;
    f=head->next; b=head;

    while(f){
        if(f->next==NULL){
            cout<<"Snake";
            return;
        }

        else if(f->next==b){
            cout<<"Snail";
            return;
        }

        f=f->next;
        b=b->next;
    }    

}
*/