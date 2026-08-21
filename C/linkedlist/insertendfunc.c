struct node * insertend(struct node * start,int value){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    struct node * ptr ;
    newnode->data=value;
    newnode->next=NULL;

    if(start==NULL){
        return newnode;
    }
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;


    return start;