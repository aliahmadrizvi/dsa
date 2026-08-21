struct node * deletepos(struct node * start,int pos){

    if(start==NULL){
        printf("LinkedList is Empty\n");
        return NULL;
    }
    if(pos==1){
        return deletebeg(start);
    }

    struct node *ptr ,*prev=NULL;
    ptr = start;
    int i=1;
     while(i<pos && ptr != NULL){
        prev=ptr;
        ptr=ptr->next;
        i++;

    }
    if(ptr==NULL ){
        printf("Invalid position\n");
        return start;
    }
    prev->next=ptr->next;
    free(ptr);
    return start;

}