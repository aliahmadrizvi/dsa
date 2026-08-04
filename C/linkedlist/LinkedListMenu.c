#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * create(struct node * start,int nodes);
void display(struct node * start);
struct node * insertbeg(struct node * start , int value);
struct node *insertpos(struct node *start,int value,int pos);
struct node * insertend(struct node * start,int value);
int main(){
    int choice= -1,inchoice=0,dechoice=0;int node = 0;
    struct node * start = NULL;
    

    while(1){
        printf("1.Create\n");
        printf("2.Insert\n");
        printf("3.Delete\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:{
               printf("Enter number of node :  ");
               scanf("%d",&node);

              start = create(start,node);
              break;

            }
            case 2 :{
                printf("1.Insert at Beginning\n");
                printf("2.Insert at Position\n");
                printf("3.Insert at End\n");
                printf("Enter your choice: ");
                scanf("%d",&inchoice);


                switch(inchoice){
                    case 1:{
                        int value;
                        printf("Enter the value : ");
                        scanf("%d",&value);

                        start=insertbeg(start,value);
                        break;
                        
                    }
                    case 2:{
                        int value,pos;
                        printf("Enter the value : ");
                        scanf("%d",&value);
                        printf("Enter the position : ");
                        scanf("%d",&pos);

                        start=insertpos(start,value,pos);
                        break;

                    }
                    case 3:{
                        int value;
                        printf("Enter the value : ");
                        scanf("%d",&value);

                        start=insertend(start,value);
                        break;

                    }
                    
                }
                break;
            }
            case 3:{ 
                
                printf("1.Delete at Beginning\n");
                printf("2.Delete at Position\n");
                printf("3.Delete at End\n");
                printf("Enter your choice: ");
                scanf("%d",&dechoice);


                switch(dechoice){
                    case 1:{
                        
                    }
                    
                }
                break;

            }
            case 4:{
                display(start);
                break;
                
            }
            case 5:{
                return 0;
               
            }
        }


    }


    return 0;
}
//create


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


//display
void display(struct node * start){
    struct node * temp = start;
    while(temp != NULL){
            printf("%d-> ",temp->data);
            temp=temp->next;

        }
        printf("NULL\n");


}
//insert

struct node * insertbeg(struct node * start , int value){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    

    newnode->next=start;
    start=newnode;

    return start;
}


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




}
//delete


