struct node * deletebeg(struct node * start){
    if(start==NULL){
        printf("LinkedList is Empty\n");
        return NULL;
    }

    struct node * ptr ;
    ptr = start;
    start=start->next;
    free(ptr);
    return start;

}