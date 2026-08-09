struct node *insertpos(struct node *start,int value,int pos){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    struct node * ptr ;
    newnode->data=value;
    newnode->next=NULL;
     if(start==NULL){
        return newnode;
    }
    ptr=start;
    int i = 1;
    while(i<pos-1){
         ptr=ptr->next;
        i++;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    
    return start;

}
