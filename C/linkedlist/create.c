struct node * create(struct node * start,int nodes){
    struct node * newnode,*temp;
    for(int i=0;i<nodes;i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){
            printf("Memory allocation failed\n");
            return start;
        }
        printf("\nEnter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
        }
        else{
             temp = start;
            while(temp->next!=NULL){
            temp=temp->next;

            }
            temp->next=newnode;

        }
    }

    return start;

}
