struct node * deleteend(struct node * start){
      if(start==NULL){
        printf("LinkedList is Empty\n");
        return NULL;
    }
    if(start->next == NULL){
        free(start);
        return NULL;
    }
    struct node *ptr ,*prev;
    ptr = start;
    while(ptr->next!=NULL){
        prev=ptr;
        ptr=ptr->next;

    }
    prev->next=NULL;
    free(ptr);
    return start;

}
